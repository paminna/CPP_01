//
// Created by Регина on 21.10.2021.
//

#ifndef CPP01_HUMANA_HPP
#define CPP01_HUMANA_HPP
#include "Weapon.hpp"

class HumanA {
public:
    HumanA(std::string name, Weapon &weaponA);
    ~HumanA();
    void attack();
private:
    std::string _name;
    std::string _type;
    Weapon &weaponA;
};


#endif //CPP01_HUMANA_HPP
