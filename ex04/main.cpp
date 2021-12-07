#include <string>
#include <sstream>
#include <fstream>
#include <iostream>

std::string	read_file(std::string const &filename)
{
	std::ifstream		file(filename);
	std::stringstream	buffer;

	buffer << file.rdbuf();
	file.close();
	return buffer.str();
}

void	write_file(std::string const &filename, std::string const &content)
{
	std::ofstream		file(filename);

	file << content;
	file.close();
}

std::string	replace_occurrences(std::string &original,
		std::string const &find, std::string const &replace)
{
	std::string	replaced;
	size_t		lastFind;

	replaced = "";
	lastFind = original.find(find);
	while (lastFind != std::string::npos)
	{
		replaced += original.substr(0, lastFind);
		replaced += replace;
		original = original.substr(lastFind + find.size(), original.size());
		lastFind = original.find(find);
	}
	replaced += original;
	return replaced;
}

int		main(int argc, char **argv)
{
	std::string	content;
	std::string	replacedFileName;

	if (argc != 4)
	{
		std::cout << "Usage: " << *argv << " <filename> <s1> <s2>" << std::endl;
		return 0;
	}
	replacedFileName = std::string(*(argv + 1));
	replacedFileName += ".replace";
	content = read_file(*(argv + 1));

	if (content.size() == 0)
		return 0;

	content = replace_occurrences(content, *(argv + 2), *(argv + 3));
	write_file(replacedFileName, content);
	return 0;
}
