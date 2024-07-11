#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {
    this->weapon = NULL;
}

HumanB::~HumanB() {}

void HumanB::attack() {
    if(this->weapon == NULL) 
        std::cout << this->name << " has no weapon to attack with" << std::endl;
    else
        std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}

