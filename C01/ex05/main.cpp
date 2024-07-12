#include "Harl.hpp"

int main(int argc, char const *argv[]) {

    if (argc != 2) {
        std::cerr << "usage: ./harl [DEBUG|INFO|WARNING|ERROR]" << std::endl;
        return 1;
    }

    if (std::string(argv[1]) != "DEBUG" && std::string(argv[1]) != "INFO" && std::string(argv[1]) != "WARNING" && std::string(argv[1]) != "ERROR") {
        std::cerr << "usage: ./harl [DEBUG|INFO|WARNING|ERROR]" << std::endl;
        return 1;
    }

    Harl harl; 
    harl.operatormsg(argv[1]);


    
    return 0;
}