//
// Created by Регина on 14.09.2021.
//

#include "Zombie.hpp"

int main()
{
    Zombie *zombie = zombieHorde(5, "zombie #");
    delete [] zombie;
}