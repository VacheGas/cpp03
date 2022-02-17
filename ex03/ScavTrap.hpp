#ifndef SCAVTRAP_HPP 
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(std::string const & new_Name);
    ScavTrap(const ClapTrap &copy);
    ScavTrap &operator=(const ScavTrap &equal);
	void    guardGate();
    void    attack(std::string const & target);
};

#endif
