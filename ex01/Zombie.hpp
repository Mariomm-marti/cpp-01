#ifndef CPP01_EX00_ZOMBIE_H_
# define CPP01_EX00_ZOMBIE_H_

# include <string>

class Zombie
{
private:
	std::string		name;

	Zombie(void);

public:
	Zombie(std::string const &name);
	~Zombie(void);

	void			announce(void) const;	
	static void		randomChump(std::string name);
	static Zombie	*newZombie(std::string name);
};

#endif
