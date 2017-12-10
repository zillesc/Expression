//
// Created by Craig Zilles on 11/16/17.
//

#ifndef EXPRESSION_EXPRESSIONVALUE_H
#define EXPRESSION_EXPRESSIONVALUE_H

#include <ostream>
#include "Expression.h"

/* This Expression type simply holds a constant. */

namespace cs126 {

    class ExpressionValue : public Expression {
    public:
        ExpressionValue(double value);
        ExpressionValue();

        double evaluate() const override;
        Expression *clone() const override;
        void setValue(double value);

    private:
        double value_;
    };


}


#endif //EXPRESSION_EXPRESSIONVALUE_H
