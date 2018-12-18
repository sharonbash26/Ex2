//
// Created by sharon_i4 on 17/12/2018.
//

#ifndef UNTITLED13_SUB_H
#define UNTITLED13_SUB_H


#include <string>
#include "BinaryExpression.h"

class Sub: public BinaryExpression {
public:
    Sub(std::string item1,std::string item2);
    std::string calculate(std::string item) override;

private:
    Expression* leftExpre;
    Expression* rightExpre;
};


#endif //UNTITLED13_SUB_H
