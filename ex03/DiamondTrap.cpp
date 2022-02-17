
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :   ClapTrap(100,100,30),ScavTrap(),FragTrap()
{
    std::cout << "default constructors running(DiamondTrap)"<<std::endl;
}

DiamondTrap::~DiamondTrap()
{
}

DiamondTrap::DiamondTrap(std::string const & new_Name) : ClapTrap(new_Name, 100, 100, 30), ScavTrap(new_Name), FragTrap(new_Name)
{
    std::cout << "constructors running(DiamondTrap)"<<std::endl;
    this->Name = this->Name + "_clap_name";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &equal)
{
	std::cout<<"Assignation operator called"<<std::endl;
	if(this == &equal)
		return (*this);
	this->Name.assign(equal.Name);
	this->Attack_damage = equal.Attack_damage;
	this->Energy_point = equal.Energy_point;
	this->Hitpoints = equal.Hitpoints;
	return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
    std::cout << "copy constructors running(DiamondTrap)"<<std::endl;
	std::cout << "copy constructors running"<<std::endl;
	this->Attack_damage = copy.Attack_damage;
	this->Energy_point = copy.Energy_point;
	this->Hitpoints = copy.Hitpoints;
	this->Name = copy.Name;
}

void DiamondTrap::attack(std::string const & target)
{
	this->ScavTrap::attack(target);
}

void    DiamondTrap::whoI()
{
	std::cout<<"(ScavTrap)(ClapTrap)"<< std::endl;
}
