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
	karenLog_t	levelPtrs[4] = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };

	for (size_t i = 0; i < 4; i++)
		if (levelNames[i].compare(level) == 0)
			(this->*levelPtrs[i])();
}
