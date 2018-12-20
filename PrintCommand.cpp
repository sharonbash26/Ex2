//
// Created by sharon_i4 on 18/12/2018.
//

#include <iostream>
#include <string>
#include "PrintCommand.h"
PrintCommand::PrintCommand(std::string myString){
        this->myString=myString;
}

int PrintCommand::execute(){
    std:: cout  << this->myString;
}