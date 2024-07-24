#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
    *this = clapTrap;
    std::cout << "ClapTrap " << _name << " has been created! (copy constructor)" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " has been destroyed!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap)
{
    std::cout << "Asignation operator called" << std::endl;
    _name = clapTrap._name;
    _hitPoints = clapTrap._hitPoints;
    _energyPoints = clapTrap._energyPoints;
    _attackDamage = clapTrap._attackDamage;
    return *this;
}

void ClapTrap::attack(std::string const &target)
{
    if (!canPerformAction())
        return;
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints == 0)
        std::cout << "ClapTrap " << _name << " was already dead" << std::endl;
    if (_hitPoints < amount){
        _hitPoints = 0;
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage and now its dead"<< std::endl;
    }else{
        _hitPoints -= amount;
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
    }
        
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!canPerformAction())
        return;
    _energyPoints--;
    if (_hitPoints + amount >= 10){
        _hitPoints = 10;
        std::cout << "ClapTrap " << _name << " has been repaired completely" << std::endl;
    }else{
        _hitPoints += amount;
        std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points!" << std::endl;
    }
}

bool ClapTrap::canPerformAction()
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " cant do anything because is dead!" << std::endl;
        return false;
    }

    if (_energyPoints > 0){
        return true;
    }
    std::cout << "ClapTrap " << _name << " cant do anything because is out of energy!" << std::endl;
    return false;
}

std::string ClapTrap::getName()
{
    return _name;
}

unsigned int ClapTrap::getHitPoints()
{
    return _hitPoints;
}

unsigned int ClapTrap::getEnergyPoints()
{
    return _energyPoints;
}

unsigned int ClapTrap::getAttackDamage()
{
    return _attackDamage;
}

void ClapTrap::setName(std::string name)
{
    _name = name;
}

void ClapTrap::setHitPoints(unsigned int hitPoints)
{
    _hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints)
{
    _energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage)
{
    _attackDamage = attackDamage;
}
