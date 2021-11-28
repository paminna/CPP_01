//
// Created by Регина on 21.10.2021.
//

#ifndef CPP01_KAREN_HPP
#define CPP01_KAREN_HPP
#include <iostream>


class Karen;
typedef void (Karen::*comm)();

struct cmd{
    std::string command;
    comm function;
};

class Karen {
public:
    Karen();
    ~Karen();
    void complain(std::string level);
    void full_cmd(cmd *command);
private:
    cmd command[4];
    void debug();
    void info();
    void warning();
    void error();
};


#endif //CPP01_KAREN_HPP
