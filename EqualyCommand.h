//
// Created by sharon_i4 on 20/12/2018.
//

#ifndef UNTITLED13_EQUALYCOMMAND_H
#define UNTITLED13_EQUALYCOMMAND_H


class EqualyCommand {
    double numOne;
    double  numTwo;
public:
    EqualyCommand(double numOne, double numTwo);
    int execute() override;
};


#endif //UNTITLED13_EQUALYCOMMAND_H
