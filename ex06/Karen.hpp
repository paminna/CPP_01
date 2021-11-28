//
// Created by Регина on 24.10.2021.
//

#ifndef CPP01_KAREN_HPP
#define CPP01_KAREN_HPP
#include <iostream>

//#define DEBUG 1
//#define INFO 2
//#define WARNING 3
//#define ERROR 4

class Karen {
public:
    Karen();
    ~Karen();
    void complain(std::string level);
//    void full_cmd(cmd *command);
private:
//    cmd command[4];
    void debug();
    void info();
    void warning();
    void error();
};

#endif //CPP01_KAREN_HPP
