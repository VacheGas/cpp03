#include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b("aram");
    ClapTrap z(b);
    ClapTrap e;
    e = z;
    a.attack(b.get_name());
    b.beRepaired(42);
    z.takeDamage(42);
}