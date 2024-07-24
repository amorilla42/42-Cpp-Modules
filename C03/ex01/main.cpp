#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clapTrap("ETTESECH");
    ClapTrap clapTrap2(clapTrap);
    ClapTrap clapTrap3 = clapTrap;

    clapTrap.setAttackDamage(999);
    clapTrap.attack("a bad guy");
    clapTrap.takeDamage(5);
    clapTrap.takeDamage(2);
    clapTrap.beRepaired(5);
    clapTrap.setEnergyPoints(0);
    clapTrap.attack("a bad guy");

    return 0;
}