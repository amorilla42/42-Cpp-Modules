#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("FragTrap")
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " has been created!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " has been created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap)
{
    *this = fragTrap;
    std::cout << "FragTrap " << _name << " has been created! (copy constructor)" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " has been destroyed!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap)
{
    std::cout << "Asignation operator called" << std::endl;
    _name = fragTrap._name;
    _hitPoints = fragTrap._hitPoints;
    _energyPoints = fragTrap._energyPoints;
    _attackDamage = fragTrap._attackDamage;
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " says: \"High five!\"" << std::endl;
}

void FragTrap::attack(std::string const &target)
{
    if (!canPerformAction())
        return;
    _energyPoints--;
    std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}