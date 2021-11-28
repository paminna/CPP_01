//
// Created by Регина on 21.10.2021.
//

#ifndef CPP01_WEAPON_HPP
#define CPP01_WEAPON_HPP
#include <iostream>

class Weapon {
public:
    Weapon(std::string type);
    ~Weapon();
    void setType(std::string type);
    std::string getType();
private:
    std::string _type;
};


#endif //CPP01_WEAPON_HPP
