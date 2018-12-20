//
// Created by sharon_i4 on 20/12/2018.
//

#ifndef UNTITLED13_SMALLCOMMAND_H
#define UNTITLED13_SMALLCOMMAND_H


#include "Command.h"

class SmallCommand: Command {
    double numOne;
    double numTwo;
public:
    SmallCommand(double numOne, double numTwo);
    int execute() override;
};




#endif //UNTITLED13_SMALLCOMMAND_H
