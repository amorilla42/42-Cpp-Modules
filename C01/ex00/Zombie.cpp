#include "Zombie.hpp"


Zombie::Zombie(std::string name) : name(name) {
    return;
}

Zombie::~Zombie(void) {
    std::cout << this->name << ": Is dead forever(?)" << std::endl;
}

void Zombie::announce(void) const {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}