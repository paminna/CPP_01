//
// Created by Регина on 21.10.2021.
//

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
    weaponB = nullptr;
    _name = name;
}

void HumanB::setWeapon(Weapon *weaponB)
{
    weaponB->setType("One type of weapon ");
}


HumanB::~HumanB()
{
    std::cout << "Human destroyed" << std::endl;
}

void HumanB::attack()
{
    if (weaponB == nullptr)
        return;
    std::cout << _name << " attacks with his " << weaponB->getType() << std::endl;
}
