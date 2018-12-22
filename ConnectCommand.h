//
// Created by sharon_i4 on 18/12/2018.
//

#ifndef UNTITLED13_CONNECTCOMMAND_H
#define UNTITLED13_CONNECTCOMMAND_H


#include <string>
#include "Command.h"
#include <map>
class ConnectCommand: public Command {
    int portno;
    const char* localHost;
    std:: map <std::string,std::string> mapCommand;
public:
    ConnectCommand(int port, const char * localHost);
    int execute() override;
};



#endif //UNTITLED13_CONNECTCOMMAND_H
