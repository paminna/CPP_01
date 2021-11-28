//
// Created by Регина on 11.09.2021.
//

#include "Zombie.hpp"

int Zombie::zombieNum = 0;

void Zombie::setName(std::string name)
{
    _name = name;
    std::cout << "Zombie name is " << _name;
}

Zombie::Zombie()
{
    setName("zombie #");
    zombieNum++;
    std::cout << zombieNum << " created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Destructed zombie " << _name << " " <<  zombieNum << std::endl;
    zombieNum--;
}

void Zombie::announce()
{
    std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}