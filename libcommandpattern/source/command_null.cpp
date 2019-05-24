#include "command_null.hpp"

using namespace command;

void command_null::execute()
{
    return;
}

void command_null::undo()
{
    return;
}