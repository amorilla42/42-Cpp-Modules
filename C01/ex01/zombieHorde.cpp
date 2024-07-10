#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {

    if(N <= 0) {
        std::cout << "Invalid number of zombies" << std::endl;
        return NULL;
    }

    Zombie *zombies = new Zombie[N];
    for (int i = 0; i < N; i++) {
        zombies[i].setName(name);
    }
    return zombies;
}
