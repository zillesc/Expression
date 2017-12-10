cmake_minimum_required(VERSION 3.8)
project(Expression)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp ExpressionValue.cpp ExpressionValue.h ExpressionAdd.cpp ExpressionAdd.h Expression.h BinaryExpression.cpp BinaryExpression.h)
add_executable(Expression ${SOURCE_FILES})