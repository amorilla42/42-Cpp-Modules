#include "Zombie.hpp"

int main(void) {
    int n = 10;
    Zombie *zombie = zombieHorde(n, "ETTE SECH");
    for (int i = 0; i < n; i++) {
        zombie[i].announce();
    }
    delete [] zombie;
    return 0;
}