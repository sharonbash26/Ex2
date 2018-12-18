//
// Created by sharon_i4 on 18/12/2018.
//

#ifndef UNTITLED13_EQCOMMAND_H
#define UNTITLED13_EQCOMMAND_H


#include "Command.h"

class AssignmentCommand: public Command{
public:
    int execute() override;
};



#endif //UNTITLED13_EQCOMMAND_H
