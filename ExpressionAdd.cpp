//
// Created by Craig Zilles on 11/16/17.
//

#include "ExpressionAdd.h"

cs126::ExpressionAdd::ExpressionAdd(Expression *left, Expression *right) :
        BinaryExpression(left, right) {
    // nothing
}

cs126::ExpressionAdd::ExpressionAdd(const cs126::ExpressionAdd &in) :
        BinaryExpression(in) {
    // nothing
}

double cs126::ExpressionAdd::evaluate() const {
    return left_->evaluate() + right_->evaluate();
}

cs126::Expression *cs126::ExpressionAdd::clone() const {
    return new ExpressionAdd(*this);
}

cs126::Expression &cs126::ExpressionAdd::operator=(const cs126::ExpressionAdd &in) {
    copyChildren(in);
    return *this;
}





