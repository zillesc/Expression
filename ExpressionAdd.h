//
// Created by Craig Zilles on 11/16/17.
//

#ifndef EXPRESSION_EXPRESSIONADD_H
#define EXPRESSION_EXPRESSIONADD_H

#include "Expression.h"
#include "BinaryExpression.h"

/* This Expression type handles adding together two sub-expressions.  It uses the BinaryExpression class
 * to manage the references to its left and right sub-expressions. */

namespace cs126 {
    class ExpressionAdd : public BinaryExpression  {

    public:
        ExpressionAdd(Expression *left, Expression *right);
        ExpressionAdd(const ExpressionAdd &in);

        Expression &operator=(const ExpressionAdd&);

        double evaluate() const override;

        Expression *clone() const override;

    private:

    };
}


#endif //EXPRESSION_EXPRESSIONADD_H
