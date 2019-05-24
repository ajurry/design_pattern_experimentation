#include "command_move_forward.hpp"
#include <iostream>
#include <string>

using namespace command;

void command_move_forward::execute()
{
    std::cout << "Advancing Forward" << std::endl;
}

void command_move_forward::undo()
{
    std::cout << "Advancing Backward" << std::endl;
}