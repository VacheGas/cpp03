#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a;
    DiamondTrap b("aram");
    DiamondTrap z(b);
    DiamondTrap e;
   e = z;
   a.attack("asd");
    a.attack(b.get_name());
    std::cout<<b.get_Energy_point()<< " "<< b.get_Hitpoints()<< " " << std::endl;
    b.beRepaired(42);
    z.takeDamage(42);
    z.highFivesGuys();
    b.attack("aramik");
    b.whoI();
}