//
// Created by sharon_i4 on 17/12/2018.
//

#ifndef UNTITLED13_DIV_H
#define UNTITLED13_DIV_H


#include "BinaryExpression.h"

class Div: public BinaryExpression {
private:
    Div(std::string item1,std::string item2);
    std::string calculate(std::string item) override ;

public:
    Expression* oneExpression;
    Expression* twoExpression;
};


#endif //UNTITLED13_DIV_H
