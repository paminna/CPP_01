//
// Created by Регина on 18.10.2021.
//

int main() {
    std::string original = "HI THIS IS BRAIN";
    std::string *stringPTR = &original;
    std::string &stringREF =  original;

    std::cout << "The address in memory of the original string " << &original << std::endl;
    std::cout << "The address in memory of the stringPTR       " << stringPTR << std::endl;
    std::cout << "The address in memory of the stringREF       " << &stringREF << std::endl;

    std::cout << "The address in memory of the stringPTR       " << *stringPTR << std::endl;
    std::cout << "The address in memory of the stringREF       " << stringREF << std::endl;
    return 0;
}