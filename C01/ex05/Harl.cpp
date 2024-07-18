#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::operatormsg(std::string level) {
   
    void (Harl::*decodelevel[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++) {
        if (level == levels[i]) {
            (this->*decodelevel[i])();
        }
    }
}

void Harl::debug() {
    std::cout << "DEBUG: Lets see what can i do" << std::endl;
}

void Harl::info() {
    std::cout << "INFO: Hi, the weather is nice, keep going" << std::endl;
}

void Harl::warning() {
    std::cout << "WARNING: Your computer is going to explode in 30 hours" << std::endl;
}

void Harl::error() {
    std::cout << "ERROR: Nothing is working, even me A3A3OJ_&/aE=?¿+ÇÇÇÇÇÇÇÇÇÇÇ" << std::endl;
}
