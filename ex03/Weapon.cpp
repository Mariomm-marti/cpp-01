#include "Weapon.hpp"
#include <string>

Weapon::Weapon(void) { }
Weapon::Weapon(std::string const &type) : type(type) { }
Weapon::~Weapon(void) { }

std::string const	&Weapon::getType(void)
{
	return type;
}

void		Weapon::setType(std::string const &type)
{
	this->type = type;
}
