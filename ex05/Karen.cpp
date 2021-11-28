//
// Created by Регина on 21.10.2021.
//

#include "Karen.hpp"

Karen::Karen()
{
    this->full_cmd(command);
    std::cout << "Karen created" << std::endl;
}

Karen::~Karen()
{
    std::cout << "Karen destroyed" << std::endl;
}

void Karen::complain(std::string level)
{
    for(int i = 0; i < 4; ++i)
    {
        if(level == command[i].command)
        {
            (this->*command[i].function)();
            return;
        }
    }
}

void Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don't put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month." <<std::endl;
}

void Karen::error(void)
{
    std::cout << "That is unacceptable, I want to speak to the manager now" << std::endl;
}

void Karen::full_cmd(cmd *command) {

    for(int i = 0; i < 4; i++)
    {
        if (i == 0) {
            command[i].command = "DEBUG";
            command[i].function = &Karen::debug;
        }
        if (i == 1) {
            command[i].command = "INFO";
            command[i].function = &Karen::info;
        }
        if (i == 2) {
            command[i].command = "WARNING";
            command[i].function = &Karen::warning;
        }
        if (i == 3) {
            command[i].command = "ERROR";
            command[i].function = &Karen::error;
        }
    }
}

