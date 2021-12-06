#ifndef CPP01_EX03_WEAPON_H_ 
# define CPP01_EX03_WEAPON_H_

# include <string>

class Weapon
{
private:
	std::string			type;

	Weapon(void);

public:
	Weapon(std::string const &type);
	~Weapon(void);

	std::string const	&getType(void);
	void				setType(std::string const &type);
};

#endif
