//
// Created by Регина on 24.10.2021.
//

#include "Karen.hpp"

Karen::Karen()
{
//    this->full_cmd(command);
    std::cout << "Karen created" << std::endl;
}

Karen::~Karen()
{
    std::cout << "Karen destroyed" << std::endl;
}

int define_level(std::string level)
{
    if (level == "DEBUG")
        return 1;
    if (level == "INFO")
        return 2;
    if (level == "WARNING")
        return 3;
    if (level == "ERROR")
        return 4;
    return 0;
}

void Karen::complain(std::string level)
{
    int i = define_level(level);
    switch(i)
    {
        case(1):
            Karen::debug();
        case(2):
            Karen::info();
        case(3):
            Karen::warning();
        case(4):
            Karen::error();
        default:
            break;
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


