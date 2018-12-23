#ifndef OPEN_DATA_SERVER_COMMAND_H
#define OPEN_DATA_SERVER_COMMAND_H

#include <string>
#include <map>
#include <vector>
#include "Command.h"

class OpenDataServerCommand : public Command
{
    std::string port ;
    std::map <std::string,std::string> varMap;
    std::map <std::string, std::string> bindMap;
    std::vector<std::string> bindedVariables;

public:
    int execute();
    void getFirstArgument(std::string arg){this->port = arg;}
    void getSecondArgument(std::string arg){}
    void getThirdArgument(std::string arg){}
    void setVarsAndBinds(std::map <std::string, std::string> _varMap,
                         std::map <std::string, std::string> _bindMap,
                         std::vector<std::string> _bindedVariables){
        varMap = _varMap;
        bindMap = _bindMap;
        bindedVariables = _bindedVariables;
    }
    int openServer(std::string,std::string link) ;
};


#endif