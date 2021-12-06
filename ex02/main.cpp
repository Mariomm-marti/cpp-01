#include <iostream>

int		main(void)
{
	std::string			string("HI THIS IS BRAIN");
	std::string const	*stringPtr = &string;
	std::string const	&stringRef = string;

	std::cout << "The memory address of the string variable: " << &string << std::endl;
	std::cout << "The memory address held by stringPtr: " << stringPtr << std::endl;
	std::cout << "The memory address held by stringRef: " << &stringRef << std::endl;

	std::cout << "The value of the string variable: " << string << std::endl;
	std::cout << "The value pointed to by stringPtr: " << *stringPtr << std::endl;
	std::cout << "The value pointed to by stringRef: " << stringRef << std::endl;
}
