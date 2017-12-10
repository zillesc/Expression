//
// Created by Craig Zilles on 11/16/17.
//

#include "ExpressionValue.h"

double cs126::ExpressionValue::evaluate() const {
    return value_;
}

void cs126::ExpressionValue::setValue(double value) {
    value_ = value;
}

cs126::ExpressionValue::ExpressionValue(double value) : value_(value) {}

cs126::ExpressionValue::ExpressionValue() : ExpressionValue(1.0) {
    // default (zero-argument) constructor
}

// copy constructor
cs126::Expression *cs126::ExpressionValue::clone() const {
    return new ExpressionValue(*this);
}

