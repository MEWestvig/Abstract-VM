#include "../includes/Includes.hpp"

int main(int argc, char const *argv[])
{
	std::ifstream myfile;
	std::string line;
	std::string instruction;
	linkedList *link = new linkedList;

	std::cout << "Start" << std::endl;
	if (argc > 1)
	{
		try
		{
			myfile.open(argv[1]);
			if (myfile.is_open())
			{
				while (getline(myfile, line))
				{
					if (line[0] != ';')
					{
						std::cout << line << '\n';
						link->add(line);
					}
				}
				std::cout << link->print(1) << std::endl;
				link->print();
				myfile.close();
			}
			else
			{
				throw MissingFile();
			}
		}
		catch (MissingFile &e)
		{
			std::cout << e.what() << std::endl;
			exit(0);
		}
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
			if (link->print(0) != "exit")
			{
				throw MissingCommand();
			}
		}
		catch (MissingCommand &e)
		{
			std::cout << e.what() << std::endl;
			exit(0);
		}
		link->print();
	}
	return 0;
}