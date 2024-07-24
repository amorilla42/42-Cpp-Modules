#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : _name("ScavTrap"), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
    std::cout << "ScavTrap " << _name << " has been created!" << std::endl;
}
