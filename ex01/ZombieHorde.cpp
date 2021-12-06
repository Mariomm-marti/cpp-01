#include "Zombie.hpp"
#include <string>

#include <iostream>
Zombie	*Zombie::zombieHorde(int number, std::string name)
{
	Zombie	*zombieHorde = new Zombie[number];

	for (int index = 0; index < number; index++)
		(zombieHorde + index)->name = name;
	std::cout << zombieHorde << std::endl;
	return zombieHorde;
}
