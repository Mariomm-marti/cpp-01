#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie(void) { }

Zombie::Zombie(std::string const &name) : name(name) { }

Zombie::~Zombie(void)
{
	std::cout << this->name << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
