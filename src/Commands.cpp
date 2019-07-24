#include "../includes/Commands.hpp"

Commands::Commands(stackList &input)
{
    this->stack = &input;
}
void Commands::Check_input(std::string command)
{
    std::string result;

    std::regex push("^(push )((int((32)|(16)|(8)))|double|float)(\\((-*|)[0-9]*\\)|\\([0-9]*\\.[0-9]+\\))( *$ *| *;$| *;.*$)");
    std::regex asserted("^(assert )((int((32)|(16)|(8)))|double|float)(\\((-*|)[0-9]*\\)|\\([0-9]*\\.[0-9]+\\))( *$ *| *;$| *;.*$)");
    std::regex pop("^(pop)( *$ *| *;$| *;.*$)");
    std::regex add("^(add)( *$ *| *;$| *;.*$)");
    std::regex sub("^(sub)( *$ *| *;$| *;.*$)");
    std::regex mul("^(mul)( *$ *| *;$| *;.*$)");
    std::regex div("^(div)( *$ *| *;$| *;.*$)");
    std::regex mod("^(mod)( *$ *| *;$| *;.*$)");
    std::regex dump("^(dump)( *$ *| *;$| *;.*$)");
    std::regex print("^(print)( *$ *| *;$| *;.*$)");
    std::regex skip("^(\\n| *|exit)( *$ *| *;$| *;.*$)");
    std::regex comment("^\\;.*$");
    if (std::regex_search(command, push))
        Commands::Push(command);
    else if (std::regex_search(command, pop))
        Commands::Pop();
    else if (std::regex_search(command, add))
        Commands::Add();
    else if (std::regex_search(command, sub))
        Commands::Sub();
    else if (std::regex_search(command, mul))
        Commands::Mul();
    else if (std::regex_search(command, div))
        Commands::Div();
    else if (std::regex_search(command, mod))
        Commands::Mod();
    else if (std::regex_search(command, print))
        Commands::Print();
    else if (std::regex_search(command, dump))
        Commands::Dump();
    else if (std::regex_search(command, asserted))
        Commands::Assert(command);
    else if ((std::regex_search(command, comment)) || (std::regex_search(command, skip)))
        std::cout << "skip yay" << std::endl;
    else
    {
        try
        {
            throw UnknownInstruction();
        }
        catch (const std::exception &e)
        {
            std::cout << "\033[1;31m" << e.what() << "\x1B[0m" << std::endl;
            exit(0);
        }
    }
}

eOperandType Commands::setType(std::string type)
{
    eOperandType return_type;
    if (type.compare("int8") == 0)
        return_type = ::Int8;
    else if (type.compare("int16") == 0)
        return_type = ::Int16;
    else if (type.compare("int32") == 0)
        return_type = ::Int32;
    else if (type.compare("double") == 0)
        return_type = ::Double;
    else if (type.compare("float") == 0)
        return_type = ::Float;
    else
    {
        std::cout << "Shit something happened" << type << std::endl;
        exit(404);
    }
    return (return_type);
}

void Commands::Push(std::string command)
{
    std::string type;
    std::string value;
    eOperandType type2;

    Factory *push_f = new Factory();
    type = command.substr(command.find(" ") + 1);
    value = type.substr(type.find("(") + 1);
    value = value.substr(0, value.find(")"));
    std::transform(type.begin(), type.end(), type.begin(), ::tolower);
    type2 = setType(type.substr(0, type.find("(")));
    this->stack->add(*(push_f->createOperand(type2, value)));
    delete (push_f);
}

void Commands::Assert(std::string command)
{
    std::string type;
    std::string value;
    eOperandType type2;
    IOperand const *assert_val;

    Factory *assert_f = new Factory();
    type = command.substr(command.find(" ") + 1);
    value = type.substr(type.find("(") + 1);
    value = value.substr(0, value.find(")"));
    std::transform(type.begin(), type.end(), type.begin(), ::tolower);
    type2 = setType(type.substr(0, type.find("(")));

    assert_val = assert_f->createOperand(type2, value);
    try
    {
        if (this->stack->getSize() < 1)
            throw StackWayTooSmall();
        if (assert_val->getType() != this->stack->head->data->getType() || assert_val->toString().compare(this->stack->head->data->toString()) != 0)
        {
            throw AssertNotTrue();
        }
    }
    catch (const std::exception &e)
    {
        std::cout << "\033[1;31m" << e.what() << "\x1B[0m" << std::endl;
        exit(0);
    }

    delete (assert_f);
}

void Commands::Pop()
{
    try
    {
        if (this->stack->getSize() < 1)
            throw PopOnEmptyStack();
    }
    catch (const std::exception &e)
    {
        std::cout << "\033[1;31m" << e.what() << "\x1B[0m" << std::endl;
        exit(0);
    }
    this->stack->remove();
}

void Commands::Add()
{
    try
    {
        if (this->stack->getSize() < 2)
            throw StackTooSmall();
    }
    catch (const std::exception &e)
    {
        std::cout << "\033[1;31m" << e.what() << "\x1B[0m" << std::endl;
        exit(0);
    }
    IOperand const *num1 = this->stack->head->data;
    IOperand const *num2 = this->stack->head->next->data;
    IOperand const *retVal = *num1 + *num2;
    this->stack->remove();
    this->stack->remove();
    this->stack->add(*retVal);
}

void Commands::Sub()
{
    try
    {
        if (this->stack->getSize() < 2)
            throw StackTooSmall();
    }
    catch (const std::exception &e)
    {
        std::cout << "\033[1;31m" << e.what() << "\x1B[0m" << std::endl;
        exit(0);
    }
    IOperand const *num1 = this->stack->head->data;
    IOperand const *num2 = this->stack->head->next->data;
    IOperand const *retVal = *num1 - *num2;
    this->stack->remove();
    this->stack->remove();
    this->stack->add(*retVal);
}

void Commands::Mul()
{
    try
    {
        if (this->stack->getSize() < 2)
            throw StackTooSmall();
    }
    catch (const std::exception &e)
    {
        std::cout << "\033[1;31m" << e.what() << "\x1B[0m" << std::endl;
        exit(0);
    }
    IOperand const *num1 = this->stack->head->data;
    IOperand const *num2 = this->stack->head->next->data;
    IOperand const *retVal = *num1 * *num2;
    this->stack->remove();
    this->stack->remove();
    this->stack->add(*retVal);
}

void Commands::Div()
{
    try
    {
        if (this->stack->getSize() < 2)
            throw StackTooSmall();
    }
    catch (const std::exception &e)
    {
        std::cout << "\033[1;31m" << e.what() << "\x1B[0m" << std::endl;
        exit(0);
    }
    IOperand const *num1 = this->stack->head->data;
    IOperand const *num2 = this->stack->head->next->data;
    IOperand const *retVal = *num1 / *num2;
    this->stack->remove();
    this->stack->remove();
    this->stack->add(*retVal);
}

void Commands::Mod()
{
    try
    {
        if (this->stack->getSize() < 2)
            throw StackTooSmall();
    }
    catch (const std::exception &e)
    {
        std::cout << "\033[1;31m" << e.what() << "\x1B[0m" << std::endl;
        exit(0);
    }
    IOperand const *num1 = this->stack->head->data;
    IOperand const *num2 = this->stack->head->next->data;
    IOperand const *retVal = *num1 % *num2;
    this->stack->remove();
    this->stack->remove();
    this->stack->add(*retVal);
}

void Commands::Print()
{
    try
    {
        if (this->stack->getSize() < 1)
            throw StackWayTooSmall();
    }
    catch (const std::exception &e)
    {
        std::cout << "\033[1;31m" << e.what() << "\x1B[0m" << std::endl;
        exit(0);
    }
    IOperand const *num1 = this->stack->head->data;
    if (num1->getType() == eOperandType::Int8)
    {
        uint8_t name = std::stod(num1->toString());
        std::cout << name << std::endl;
    }
    else
        std::cout << "err";
}

void Commands::Dump()
{
    this->stack->print();
}

Commands::~Commands()
{
}