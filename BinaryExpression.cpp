//
// Created by Craig Zilles on 12/7/17.
//

#include "BinaryExpression.h"

// constructor
cs126::BinaryExpression::BinaryExpression(cs126::Expression *left, cs126::Expression *right) :
        left_(left), right_(right) {
    // nothing
}

// copy constructor
cs126::BinaryExpression::BinaryExpression(const BinaryExpression &in) :
        left_(in.left_->clone()), right_(in.right_->clone()){
    // nothing
}

cs126::BinaryExpression::~BinaryExpression() {
    delete left_;
    delete right_;
}

// protected method for implementing sub-class-specific assignment equals
void cs126::BinaryExpression::copyChildren(const cs126::BinaryExpression &in) {
    // check to make sure I'm not copying myself into myself.  Wouldn't want to delete in that case...
    if (this != &in) {
        delete left_;
        left_ = in.left_->clone();
        delete right_;
        right_ = in.right_->clone();
    }
}
