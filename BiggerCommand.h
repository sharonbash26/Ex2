//
// Created by sharon_i4 on 20/12/2018.
//

#ifndef UNTITLED13_BIGGERCOMMAND_H
#define UNTITLED13_BIGGERCOMMAND_H

#include "Command.h"

class BiggerCommand: public Command{
    double numOne;
    double numTwo;
public:
    BiggerCommand(double numOne, double numTwo);
    int execute() override;
};


#endif //UNTITLED13_BIGGERCOMMAND_H
