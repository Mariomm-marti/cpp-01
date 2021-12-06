#ifndef CPP01_EX03_HUMANB_H_
# define CPP01_EX03_HUMANB_H_

# include "Weapon.hpp"
# include <string>

class HumanB
{
private:
	std::string	name;
	Weapon		*weapon;

public:
	HumanB(std::string const &name);
	~HumanB(void);

	void		attack(void) const;
	void		setWeapon(Weapon &weapon);
};

#endif
