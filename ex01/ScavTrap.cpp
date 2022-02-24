#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(100, 50, 20)
{
   std::cout << "default constructors running(ScavTrap)"<<std::endl;
}

ScavTrap::ScavTrap(const std::string& new_Name) : ClapTrap(new_Name, 100, 50, 20)
{
    std::cout << "constructors running(ScavTrap)"<<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "copy constructors running(ScavTrap)"<<std::endl;
}

 ScavTrap::~ScavTrap()
 {
    std::cout << "default desstructors running(ScavTrap)"<<std::endl;
 }

 ScavTrap &ScavTrap::operator=(const ScavTrap &equal)
{
	std::cout<<"Assignation operator called(ScavTrap)"<<std::endl;
	if(this == &equal)
		return (*this);
	this->Name.assign(equal.Name);
	this->Attack_damage = equal.Attack_damage;
	this->Energy_point = equal.Energy_point;
	this->Hitpoints = equal.Hitpoints;
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout<<"ScavTrap have enterred in Gate keeper mode"<<std::endl;
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << this->Name <<" attack to (" << target << this->Attack_damage << ")(ScavTrap)"<< std::endl;
}