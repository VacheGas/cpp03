#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(100, 100, 30)
{
   std::cout << "default constructors running(FragTrap)"<<std::endl;
}

FragTrap::FragTrap(const std::string& new_Name) : ClapTrap(new_Name, 100, 100, 30)
{
    std::cout << "constructors running(FragTrap)"<<std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "copy constructors running(FragTrap)"<<std::endl;
}

 FragTrap::~FragTrap()
 {
    std::cout << "default desstructors running(FragTrap)"<<std::endl;
 }

 FragTrap &FragTrap::operator=(const FragTrap &equal)
{
	std::cout<<"Assignation operator called(FragTrap)"<<std::endl;
	if(this == &equal)
		return (*this);
	this->Name.assign(equal.Name);
	this->Attack_damage = equal.Attack_damage;
	this->Energy_point = equal.Energy_point;
	this->Hitpoints = equal.Hitpoints;
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout<<"positive high fives request(FragTrap)"<<std::endl;
}

void FragTrap::attack(std::string const & target)
{
	std::cout<<"FragTrap " << this->Name <<" attack to (" << target << this->Attack_damage << " ScavTrap)"<< std::endl;
}