//
// Created by sharon_i4 on 18/12/2018.
//

#include "SleepCommand.h"
#include <chrono>
#include <thread>

int SleepCommand::execute(){
std::this_thread::sleep_for(std::chrono::operator""s(10));
}
