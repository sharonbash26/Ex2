//
// Created by sharon_i4 on 20/12/2018.
//

#include "BiggerCommand.h"
BiggerCommand::BiggerCommand(double numOne, double numTwo){
    this->numOne=numOne;
    this->numTwo=numTwo;
}
int BiggerCommand::execute(){
    if(numOne>numTwo){
        return 1;
    }
    if(numOne<numTwo){
        return 0;
    }

}