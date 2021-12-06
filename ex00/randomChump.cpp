#include "Zombie.hpp"
#include <string>

void	Zombie::randomChump(std::string name)
{
	Zombie	zombie(name);

	zombie.announce();
}
