#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    ~FragTrap();
    FragTrap(const std::string& new_Name);
    FragTrap(const ClapTrap &copy);
    FragTrap &operator=(const FragTrap &equal);
	void    highFivesGuys();
};
