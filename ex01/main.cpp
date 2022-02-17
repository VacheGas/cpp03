#include "ScavTrap.hpp"

int main()
{
    ScavTrap a;
    ScavTrap b("aram");
    ScavTrap z(b);
    ScavTrap e;
    e = z;
    a.attack(z.get_name());
    a.attack(b.get_name());
    std::cout<<b.get_Energy_point()<< " "<< b.get_Hitpoints()<< " " << std::endl;
    b.beRepaired(42);
    z.takeDamage(42);
    z.guardGate();
}