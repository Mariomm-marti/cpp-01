#include "Karen.hpp"
#include <string>
#include <iostream>

Karen::Karen(void) { }
Karen::~Karen(void) { }

void	Karen::debug(void) const
{
	std::cout << "[DEBUG] The employee is attending Karen right now" << std::endl;
}

void	Karen::info(void) const
{
	std::cout << "[ INFO] Karen: I will eat this double-cheese-triple-pickle-without-onion-extra-grand burger that I was served now" << std::endl;
}

void	Karen::warning(void) const
{
	std::cout << "[ WARN] Karen is about to explode on anger. The product was not great" << std::endl;
}

void	Karen::error(void) const
{
	std::cout << "[ERROR] Karen lost her mind and wants to destruct herself" << std::endl;
}

void	Karen::complain(std::string const level) const
{
	std::string	levelNames[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	size_t		levelSeverity;

	for (size_t i = 0; i < 4; i++)
		if (levelNames[i].compare(level) == 0)
			levelSeverity = i;

	switch (levelSeverity)
	{
		case 3:
			error();
		case 2:
			warning();
		case 1:
			info();
		case 0:
			debug();
			break ;
		default:
			std::cout << "[ Karen saying Karen-like things ]" << std::endl;
	}
}
