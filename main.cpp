#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
	std::ifstream instructFile;
	std::string instruction;

	if (argc > 1)
	{
		//save instructions from the file.
	}
	else
	{
		while (1)
		{
			std::cin >> instruction;
			//loop through and save instruction
		}
	}
	return 0;
}
