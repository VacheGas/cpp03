#include "ClapTrap.hpp"

void ClapTrap::def_set(int en_point, int new_hit, int new_damage)
{
    this->Energy_point = en_point;
    this->Hitpoints = new_hit;
    this->Attack_damage = new_damage;
}

ClapTrap::ClapTrap(const std::string &new_Name)
{
    std::cout << "constructors running(ClapTrap)"<<std::endl;
	this->def_set(10, 10, 0);
    this->Name.assign(new_Name);
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	 std::cout << "copy constructors running(ClapTrap)"<<std::endl;
	this->Attack_damage = copy.Attack_damage;
	this->Energy_point = copy.Energy_point;
	this->Hitpoints = copy.Hitpoints;
	this->Name = copy.Name;
}



ClapTrap::ClapTrap()
{
    std::cout << "default constructors running(ClapTrap)"<<std::endl;
	this->Name.assign("ananun");
    this->def_set(10, 10, 0);
}

ClapTrap::~ClapTrap()
{
    std::cout << "default desstructors running(ClapTrap)"<<std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap "<< this->Name <<" attack to (" << target << this->Attack_damage << ")"<< std::endl;
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
	std::cout<<"Assignation operator called(ClapTrap)"<<std::endl;
	if(this == &equal)
		return (*this);
	this->Name.assign(equal.Name);
	this->Attack_damage = equal.Attack_damage;
	this->Energy_point = equal.Energy_point;
	this->Hitpoints = equal.Hitpoints;
	return (*this);
}

ClapTrap::ClapTrap(const std::string &new_Name, int en_point, int new_hit, int new_damage)
{
	std::cout << "Inheritance class running(ClapTrap)" << std::endl;
	Name.assign(new_Name);
	def_set(en_point, new_hit, new_damage);
}

std::string ClapTrap::get_name()
{
	return (this->Name);
}

int ClapTrap::get_Attack_damage()
{
	return (this->Attack_damage);
}

int ClapTrap::get_Hitpoints()
{
	return (this->Hitpoints);
}

int ClapTrap::get_Energy_point()
{
	return (this->Energy_point);
}

ClapTrap::ClapTrap(int en_point, int new_hit, int new_damage)
{
	std::cout<<"Inheritance class running(ClapTrap)"<< std::endl;
	this->def_set(en_point, new_hit, new_damage);
	this->Name.assign("ananun");
}