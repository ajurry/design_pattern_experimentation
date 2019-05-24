#include "command_move_left.hpp"
#include <iostream>
#include <string>

using namespace command;

void command_move_left::execute()
{
    std::cout << "Advancing Left" << std::endl;
}

void command_move_left::undo()
{
    std::cout << "Advancing Right" << std::endl;
}