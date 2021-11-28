//
// Created by Регина on 21.10.2021.
//

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weaponA) : weaponA(weaponA)
{
    _name = name;
    weaponA.setType("One type of weapon ");
}

HumanA::~HumanA()
{
    std::cout << "Human destroyed" << std::endl;
}

void HumanA::attack()
{
    std::cout << _name << " attacks with his " << weaponA.getType() << std::endl;
}