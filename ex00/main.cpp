//
// Created by Регина on 11.09.2021.
//

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie;
    std::string name;
    std::cout << "Create a zombie" << std::endl;
    std::cout << "Enter name" << std::endl;
    std::cin >> name;
    zombie = newZombie(name);
    randomChump(name);
    delete zombie;
    while (true);
}