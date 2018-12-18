//
// Created by sharon_i4 on 17/12/2018.
//

#ifndef UNTITLED13_NUMBER_H
#define UNTITLED13_NUMBER_H


#include "Expression.h"

class Number: public Expression  {
public:
    Number(std::string num );
    std::string calculate(std::string item)  ;

private:
    std::string myNum;

};


#endif //UNTITLED13_NUMBER_H
