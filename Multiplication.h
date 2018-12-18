//
// Created by sharon_i4 on 17/12/2018.
//

#ifndef UNTITLED13_MULTIPLICATION_H
#define UNTITLED13_MULTIPLICATION_H


#include "BinaryExpression.h"

class Multiplication: public BinaryExpression {
public:
    Multiplication(std::string item1,std::string item2);
    std::string calculate(std::string item) override ;

private:
    Expression* myExpression1;
    Expression* myExpression2;

};


#endif //UNTITLED13_MULTIPLICATION_H
