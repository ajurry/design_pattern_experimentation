#include "command_move_right.hpp"
#include <iostream>
#include <string>

using namespace command;

void command_move_right::execute()
{
    std::cout << "Advancing Right" << std::endl;
}

void command_move_right::undo()
{
    std::cout << "Advancing Left" << std::endl;
}