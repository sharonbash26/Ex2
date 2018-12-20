
//
// Created by sharon_i4 on 20/12/2018.
//

#ifndef UNTITLED13_BIGGEREQUALYCOMMAND_H
#define UNTITLED13_BIGGEREQUALYCOMMAND_H


#include "Command.h"

class BiggerEqualyCommand: Command {
    double numOne;
    double  numTwo;
public:
    BiggerEqualyCommand(double numOne, double numTwo);
    int execute() override;

};


#endif //UNTITLED13_BIGGEREQUALYCOMMAND_H
