//
// Created by Регина on 21.10.2021.
//

#ifndef CPP01_HUMANB_HPP
#define CPP01_HUMANB_HPP
#include "Weapon.hpp"


class HumanB {
public:
    HumanB(std::string name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon *weaponB);
private:
    Weapon *weaponB;
    std::string _name;
    std::string _type;
};


#endif //CPP01_HUMANB_HPP
