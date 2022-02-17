#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(const std::string& new_Name);
    ScavTrap(const ClapTrap &copy);
    ScavTrap &operator=(const ScavTrap &equal);
	void    guardGate();
};
