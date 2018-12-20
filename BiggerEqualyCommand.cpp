//
// Created by sharon_i4 on 20/12/2018.
//

#include "BiggerEqualyCommand.h"

BiggerEqualyCommand::BiggerEqualyCommand(double numOne, double numTwo) {
    this->numOne=numOne;
    this->numTwo=numTwo;
}
int BiggerEqualyCommand::execute(){
    if(numOne>=numTwo){
        return 1;
    }else{
        return 0;
    }

}