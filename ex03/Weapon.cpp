#include "Weapon.hpp"
#include <string>

Weapon::Weapon(std::string const &type) : type(type) { }
Weapon::~Weapon(void) { }

std::string const	&Weapon::getType(void) const
{
	return type;
}

void		Weapon::setType(std::string const &type)
{
	this->type = type;
}
