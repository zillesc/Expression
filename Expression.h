//
// Created by Craig Zilles on 12/4/17.
//

#ifndef EXPRESSION_EXPRESSION_H
#define EXPRESSION_EXPRESSION_H

/* This is an abstract base class for Expressions.  This allows us to compose expressions out
 * of other expressions.  One assumption made is that Expressions don't share sub-expressions,
 * so when we delete an Expression, it can delete any sub-expressions. */

namespace cs126 {
    class Expression {
    public:
        // Evaluate an expression to produce a double value
        virtual double evaluate() const = 0;

        // Make a copy of the current expression (deep-copy, so no shared internals)
        virtual Expression *clone() const = 0;

        // Deleting an expression deletes any sub-expressions
        virtual ~Expression() {};
    };
}


#endif //EXPRESSION_EXPRESSION_H
