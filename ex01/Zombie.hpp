#ifndef CPP01_EX01_ZOMBIE_H_
# define CPP01_EX01_ZOMBIE_H_

# include <string>

class Zombie
{
private:
	Zombie(void);

public:
	std::string		name;

	Zombie(std::string const &name);
	~Zombie(void);

	void			announce(void) const;	
	static Zombie	*zombieHorde(int number, std::string name);
};

#endif
