#include <iostream>
#include <string>

int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "String memory address: "    << &str       << std::endl;
    std::cout << "stringPTR memory address: " << stringPTR  << std::endl;
    std::cout << "stringREF memory address: " << &stringREF << std::endl;
    
    std::cout << "String value: "    << str        << std::endl;
    std::cout << "stringPTR value: " << *stringPTR << std::endl;
    std::cout << "stringREF value: " << stringREF  << std::endl;

    return 0;
}