//
// Created by Craig Zilles on 12/7/17.
//

#ifndef EXPRESSION_BINARYEXPRESSION_H
#define EXPRESSION_BINARYEXPRESSION_H

#include "Expression.h"

/* A common kind of expression is one that handle a binary operator on two sub-expressions.  This abstract
 * base class (which is derived from Expression) handles the construction, copy-construction, copying,
 * destruction, accessors, and mutators for the left and right children.  This class is abstract because
 * the evaluate and clone methods aren't implemented.
 */

namespace cs126 {
    class BinaryExpression : public Expression {

    public:
        BinaryExpression(Expression *left, Expression *right);
        BinaryExpression(const BinaryExpression &in);

        // By implementing the destructor here, we don't have to in the sub-classes, since it is inherited
        virtual ~BinaryExpression();

        Expression *getLeft() const {
            return left_;
        }

        void setLeft(Expression *left) {
            left_ = left;
        }

        Expression *getRight() const {
            return right_;
        }

        void setRight(Expression *right) {
            right_ = right;
        }

    protected:  // note that these are protected and not private, so sub-classes can access directly
        Expression *left_;
        Expression *right_;

        void copyChildren(const BinaryExpression &in);
    };
}

#endif //EXPRESSION_BINARYEXPRESSION_H
