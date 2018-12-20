//
// Created by sharon_i4 on 20/12/2018.
//

#include "EqualyCommand.h"
EqualyCommand::EqualyCommand(double numOne, double numTwo) {
    this->numOne=numOne;
    this->numTwo=numTwo;
}
int EqualyCommand::execute(){
    if(numOne==numTwo){
        return 1;
    }else{
        return 0;
    }
}