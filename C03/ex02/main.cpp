#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ScavTrap scavTrap("Escavador");
    FragTrap fragTrap("Fragole");

    scavTrap.attack("Fragole");
    scavTrap.guardGate();
    fragTrap.attack("Escavador");
    fragTrap.highFivesGuys();
    return 0;
}