//
// Created by Регина on 21.10.2021.
//
#include <iostream>
#include <fstream>
#include <vector>

int main(int argc, char **argv)
{
    std::ifstream read("file.txt");
    std::ofstream write ("FILE.replace");
    std::string line;
    std::string find, replace;
    int pos;

    find = argv[1];
    replace = argv[2];
    std::cout << find << " "<< replace << std::endl;
    if (read.is_open())
    {
        while (getline(read,line))
        {
            while ((pos = line.find(find)) != std::string::npos)
            {
                line.replace(line.begin() + pos, line.begin() + pos + find.length(), replace);
                std::cout << line << std::endl;
            }
            write << line << std::endl;
        }
    }
    else
    {
        std::cout << "Some problems with file" << std::endl;
        return 0;
    }
}
