//
// Created by Регина on 11.09.2021.
//

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *zombie = new Zombie(name);
    return (zombie);
}
