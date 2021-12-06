#include "Zombie.hpp"
#include <iostream>

int		main(void)
{
	size_t		count;
	std::string	name;
	Zombie		*horde;

	std::cin >> count;
	std::cin >> name;
	horde = Zombie::zombieHorde(count, name);
	for (size_t i = 0; i < count; i++)
		(horde + i)->announce();
	delete []horde;
}
