#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap")
{
    _attackDamage = 20;
    _hitPoints = 100;
    _energyPoints = 50;
    std::cout << "ScavTrap " << " empty constructor" << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _attackDamage = 20;
    _hitPoints = 100;
    _energyPoints = 50;
    std::cout << "ScavTrap " << name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap)
{
    *this = scavTrap;
    std::cout << "ScavTrap " << _name << " has been created! (copy constructor)" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " has been destroyed!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap)
{
    std::cout << "ScavTrap Asignation operator called" << std::endl;
    _name = scavTrap._name;
    _hitPoints = scavTrap._hitPoints;
    _energyPoints = scavTrap._energyPoints;
    _attackDamage = scavTrap._attackDamage;
    return *this;
}

void ScavTrap::attack(std::string const &target)
{
    if (!canPerformAction())
        return;
    _energyPoints--;
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode" << std::endl;
}
