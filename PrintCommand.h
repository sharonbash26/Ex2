//
// Created by sharon_i4 on 18/12/2018.
//

#ifndef UNTITLED13_PRINTCOMMAND_H
#define UNTITLED13_PRINTCOMMAND_H


class PrintCommand {
    std::string operand1;
    std::string operand2;

public:
    int execute() ;
    void getFirstArgument(std::string arg){this->operand1 = arg;}
    void getSecondArgument(std::string arg){}
    void getThirdArgument(std::string arg){}
};




#endif //UNTITLED13_PRINTCOMMAND_H
