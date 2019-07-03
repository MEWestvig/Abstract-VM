#include <iostream>
#include <fstream>
#include <string>
#include "../includes/linkedList.hpp"
#include "../includes/MissingCommand.hpp"

int main(int argc, char const *argv[])
{
	std::ifstream myfile;
	std::string line;
	std::string instruction;
	linkedList *link = new linkedList;

	std::cout << "Start" << std::endl;
	if (argc > 1)
	{
		myfile.open(argv[1]);
		if (myfile.is_open())
		{
			while (getline(myfile, line))
			{
				std::cout << line << '\n';
				link->add(line);
			}
			std::cout << link->print(1) << std::endl;
			link->print();
			myfile.close();
		}
		else
			std::cout << "Unable to open file" << std::endl;
	}
	else
	{
		while (1)
		{
			std::cin >> instruction;
			if (instruction == ";;")
			{
				break;
			}
			link->add(instruction);
		}
		try
		{
			if (link->print(0) != "end")
			{
				throw MissingCommand();
			}
		}
		catch (MissingCommand &e)
		{
			std::cout << e.what() << std::endl;
		}
		link->print();
	}
	return 0;
}