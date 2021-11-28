//
// Created by Регина on 11.09.2021.
//

#include <vector>
#include "Zombie.hpp"


Zombie * zombieHorde(int N, std::string name)
{
    int i;

    i = 1;
    Zombie *zombie = new Zombie[N];
    while (i <= N)
    {
        zombie[i].setName(name);
        std::cout << i << std::endl;
        i++;
    }

    return(zombie);
}