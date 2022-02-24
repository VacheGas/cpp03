#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(const std::string& new_Name);
    ScavTrap(const ScavTrap &copy);
    ScavTrap &operator=(const ScavTrap &equal);
	void    guardGate();
    void    attack(std::string const & target);
};
