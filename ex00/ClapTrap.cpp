#include "ClapTrap.hpp"

void ClapTrap::def_set(int en_point, int new_hit, int new_damage)
{
    this->Energy_point = en_point;
    this->Hitpoints = new_hit;
    this->Attack_damage = new_damage;
}

ClapTrap::ClapTrap(const std::string &new_Name)
{
    std::cout << "constructors running"<<std::endl;
	this->def_set(10, 10, 0);
    this->Name.assign(new_Name);
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "copy constructors running"<<std::endl;
	this->Attack_damage = copy.Attack_damage;
	this->Energy_point = copy.Energy_point;
	this->Hitpoints = copy.Hitpoints;
	this->Name = copy.Name;
}

ClapTrap::ClapTrap()
{
	std::cout << "default constructors running"<<std::endl;
	this->Name.assign("ananun");
    this->def_set(10, 10, 0);
}

ClapTrap::~ClapTrap()
{
	std::cout << "default desstructors running"<<std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << this->Name <<" attack to " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ooo no! take damage "<< amount << std::endl;
	this->Attack_damage += amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "congrat be Repaired " << amount <<std::endl;
	this->Energy_point += amount;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &equal)
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

std::string ClapTrap::get_name()
{
	return (this->Name);
}