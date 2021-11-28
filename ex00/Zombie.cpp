//
// Created by Регина on 11.09.2021.
//

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    _name = name;
    std::cout << "Zombie "<< _name << " created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Destructed zombie " << _name << std::endl;
}

void Zombie::announce()
{
    std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
