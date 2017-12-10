#include <iostream>
#include "ExpressionValue.h"
#include "ExpressionAdd.h"

using cs126::Expression;
using cs126::ExpressionValue;
using cs126::ExpressionAdd;
using std::cout;
using std::endl;


int main() {

    // ExpressionValues are 16B big (8B for the vtable, 8B for the double they contain)
    cout << "sizeof(ExpressionValue)" << sizeof(ExpressionValue) << endl;

    ExpressionAdd *expAdd1 = new ExpressionAdd(new ExpressionValue(7.0), new ExpressionValue(4.0));
    ExpressionAdd *expAdd2 = new ExpressionAdd(new ExpressionValue(11.0), expAdd1);

    // Demonstrates that ExpressionAdds evaluate correctly no-matter what kind of sub-expressions they have
    cout << "11 + 7 + 4 = " << expAdd2->evaluate() << endl;

    // Demonstrate that the copy constructor works
    ExpressionAdd *expAdd3 = new ExpressionAdd(*expAdd2);
    cout << "should be the same as the previous line: " << expAdd3->evaluate() << endl;

    // Modify the thing we copied to see that the copy constructor made a deep copy
    ExpressionValue *eValue = (ExpressionValue *)expAdd1->getLeft();
    eValue->setValue(500.0);

    // The first one should have changed, but the second one won't have
    cout << "11 + 500 + 4 = " << expAdd2->evaluate() << endl;
    cout << "11 + 7 + 4 = " << expAdd3->evaluate() << endl;

    // By printing out the addresses of the left and right children, we can see that they are different
    cout << "The following two lines should be different:" << endl;
    cout << expAdd2->getLeft() << " " << expAdd2->getRight() << endl;
    cout << expAdd3->getLeft() << " " << expAdd3->getRight() << endl;

    delete expAdd3;
    delete expAdd2;

    return 0;
}


