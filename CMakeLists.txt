cmake_minimum_required(VERSION 3.17)
project(CPP01)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00 ex00/main.cpp ex00/newZombie.cpp ex00/randomChump.cpp ex00/Zombie.cpp)
add_executable(ex01 ex01/main.cpp ex01/Zombie.cpp ex01/ZombieHorde.cpp)
add_executable(ex02 ex02/main.cpp)
add_executable(ex03 ex03/main.cpp ex03/Weapon.cpp ex03/Weapon.hpp ex03/HumanA.cpp ex03/HumanA.hpp ex03/HumanB.cpp ex03/HumanB.hpp)
add_executable(ex04 ex04/main.cpp)
add_executable(ex05 ex05/main.cpp ex05/Karen.cpp ex05/Karen.hpp)