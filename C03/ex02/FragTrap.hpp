#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &fragTrap);
    ~FragTrap();
    FragTrap &operator=(const FragTrap &fragTrap);

    void attack(std::string const &target);
    void highFivesGuys(void);
};

#endif