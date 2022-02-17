#ifndef FRAGTRAP_HPP 
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap :virtual public ClapTrap
{
public:
    FragTrap();
    ~FragTrap();
    FragTrap(std::string const &new_Name);
    FragTrap(const ClapTrap &copy);
    FragTrap &operator=(const FragTrap &equal);
    void attack(std::string const & target);
	void    highFivesGuys();
};

#endif