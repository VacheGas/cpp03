#ifndef CLAPTRAP_HPP 
#define CLAPTRAP_HPP
#include <iostream>
class  ClapTrap
 {
	protected:
	  	std::string	Name;
		int			Hitpoints;
		int			Energy_point;
		int			Attack_damage;
		void		def_set(int en_point, int new_hit, int new_damage);
		ClapTrap(const std::string& new_Name, int en_point, int new_hit, int new_damage);
		ClapTrap(int en_point, int new_hit, int new_damage);
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(const std::string& new_Name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator=(const ClapTrap &equal);
	 	void attack(const std::string & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string get_name();
		int get_Attack_damage();
		int get_Hitpoints();
		int get_Energy_point();
 };
 
#endif