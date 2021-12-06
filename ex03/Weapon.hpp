#ifndef CPP01_EX03_WEAPON_H_ 
# define CPP01_EX03_WEAPON_H_

# include <string>

class Weapon
{
private:
	std::string			type;

public:
	Weapon(std::string const &type);
	~Weapon(void);

	std::string const	&getType(void) const;
	void				setType(std::string const &type);
};

#endif
