//
// Created by Регина on 11.09.2021.
//

#ifndef CPP1_ZOMBIE_HPP
#define CPP1_ZOMBIE_HPP

#include <iostream>


class Zombie {
public:
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
private:
    std::string _name;
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif //CPP1_ZOMBIE_HPP
