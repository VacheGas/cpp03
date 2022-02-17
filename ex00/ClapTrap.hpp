#ifndef CLAPTRAP_HPP 
#define CLAPTRAP_HPP
#include <iostream>
class  ClapTrap
 {
	private:
	  	std::string	Name;
		int			Hitpoints;
		int			Energy_point;
		int			Attack_damage;
	protected:
		void		def_set(int en_point, int new_hit, int new_damage);
 	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(const std::string &new_Name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator=(const ClapTrap &equal);
	 	void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string get_name();
 };
 
#endif