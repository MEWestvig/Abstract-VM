#include "../includes/includes.hpp"
#include "../includes/Commands.hpp"

void do_instructions(linkedList *link, Commands *c)
{
    std::regex close("^exit( *$ *| *;$| *;.*$)");
    for (int i = link->getSize() - 1; i > 0; i--)
    {
        if (std::regex_search(link->print(i), close))
            exit(0);
        c->Check_input(link->print(i));
    }
    try
    {
        throw MissingCommand();
    }
    catch (const std::exception &e)
    {
        std::cout << "\033[1;31m" << e.what() << "\x1B[0m" << std::endl;
        exit(0);
    }
}

int main(int argc, char *argv[])
{
    std::ifstream myfile;
    std::string line;
    std::string instruction;
    linkedList *link = new linkedList;
    stackList *stack = new stackList;
    Commands *c = new Commands(*stack);

    if (argc > 1)
    {
        myfile.open(argv[1]);
        if (myfile.is_open())
        {
            while (getline(myfile, line))
                link->add(line);
            link->add(line);
            do_instructions(link, c);
            myfile.close();
        }
        else
            std::cout << "Unable to open file" << std::endl;
    }
    else
    {

        while (1)
        {
            getline(std::cin, instruction);
            if (instruction == ";;")
                break;
            link->add(instruction);
        }
        link->add(line);
        do_instructions(link, c);
    }
    return 0;
}