cmake_minimum_required(VERSION 3.8)
project(untitled13)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Expression.h  Number.cpp Number.h Sub.cpp Sub.h Div.cpp Div.h Multiplication.cpp Multiplication.h PlusOperation.cpp PlusOperation.h Command.h ConnectCommand.cpp ConnectCommand.h AssignmentCommand.cpp AssignmentCommand.h PrintCommand.cpp PrintCommand.h SleepCommand.cpp SleepCommand.h ElevatorCommand.cpp ElevatorCommand.h AileronCommand.cpp AileronCommand.h RollCommand.cpp RollCommand.h PitchCommand.cpp PitchCommand.h DivCommand.cpp DivCommand.h MinosCommand.cpp MinosCommand.h MultCommand.cpp MultCommand.h PlusCommand.cpp PlusCommand.h WhileCommand.cpp WhileCommand.h FunctionCommand.cpp FunctionCommand.h IfCommand.cpp IfCommand.h ConditionCommand.cpp ConditionCommand.h OpenDataServerCommand.cpp OpenDataServerCommand.h admin.cpp admin.h)
add_executable(untitled13 ${SOURCE_FILES})