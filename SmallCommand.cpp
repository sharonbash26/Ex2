//
// Created by sharon_i4 on 20/12/2018.
//

#include <string>
#include "SmallCommand.h"

SmallCommand::SmallCommand(double numOne, double numTwo) {
    this->numOne = numOne;
    this->numTwo = numTwo;
}

int SmallCommand::execute(){
    if(numOne<numTwo){
        return 1;
    }
    if(numOne>numTwo){
        return 0;
    }

}