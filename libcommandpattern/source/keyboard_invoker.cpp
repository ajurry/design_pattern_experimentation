#include "keyboard_invoker.hpp"
#include "command_interface.hpp"

#include <map>
#include <vector>

using namespace command;

void keyboard_invoker::key_was_pressed(char key) 
{
    auto iter = command_list.find(key);

    if (iter != command_list.end()) {
        iter->second->execute();
        command_history.push_back(iter->second.get());
    }
}

void keyboard_invoker::set_command(char key, command_interface* command)
{
    if (command_list.find(key) == command_list.end()) {
        command_list.insert(std::make_pair(key, std::unique_ptr<command_interface>(command)));
    }
}

void keyboard_invoker::undo_all_commands()
{
    for (auto reverse_iter = command_history.rbegin();
            reverse_iter != command_history.rend();
             ++reverse_iter)
    {
        (*reverse_iter)->undo();
    }
}