#include "HumanA.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(std::string const &name, Weapon const &weapon) : name(name), weapon(weapon) { }
HumanA::~HumanA(void) { }

void	HumanA::attack(void) const
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
