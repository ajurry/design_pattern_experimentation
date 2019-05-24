#include "command_move_backward.hpp"
#include <iostream>
#include <string>

using namespace command;

void command_move_backward::execute()
{
    std::cout << "Advancing Backward" << std::endl;
}

void command_move_backward::undo()
{
    std::cout << "Advancing Forward" << std::endl;
}