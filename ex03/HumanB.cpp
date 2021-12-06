#include "HumanB.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string const &name) : name(name) { }
HumanB::~HumanB(void) { }

void	HumanB::attack(void) const
{
	std::string		weaponName;

	weaponName = "arm? HumanB is unarmed!";
	if (weapon != nullptr)
		weaponName = weapon->getType();
	std::cout << name << " attacks with their " << weaponName << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
