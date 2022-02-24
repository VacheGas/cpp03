#ifndef DIAMONDTRAP_HPP 
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap 
{
private:
    
public:
    DiamondTrap(/* args */);
    virtual ~DiamondTrap();
    DiamondTrap(std::string const & new_Name);
	DiamondTrap(const DiamondTrap &copy);
	DiamondTrap &operator=(const DiamondTrap &equal);
    void attack(std::string const & target);
    void    whoI();
};
#endif
