#ifndef CPP01_EX03_HUMANA_H_
# define CPP01_EX03_HUMANA_H_

# include "Weapon.hpp"
# include <string>

class HumanA
{
private:
	std::string		name;
	Weapon const	&weapon;

public:
	HumanA(std::string const &name, Weapon const &weapon);
	~HumanA(void);

	void			attack(void) const;
};

#endif
