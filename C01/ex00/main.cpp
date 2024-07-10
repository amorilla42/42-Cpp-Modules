#include "Zombie.hpp"

int main(void) {
    Zombie *zombie = newZombie("GLASK");
    zombie->announce();
    randomChump("ELPEPE");
    randomChump("ETTE SECH");
    delete zombie;
    return 0;
}