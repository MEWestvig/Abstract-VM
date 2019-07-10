#include "../includes/Factory.hpp"

Factory::Factory()
{
	OperandFt[0] = &Factory::createInt8;
	OperandFt[1] = &Factory::createInt16;
	OperandFt[2] = &Factory::createInt32;
	OperandFt[3] = &Factory::createFloat;
	OperandFt[4] = &Factory::createDouble;
}

Factory::~Factory()
{
}

IOperand const *Factory::createInt8(std::string const &value) const
{
	class Int8 *retOperand = new class Int8();
	char *failed;
	try
	{
		int64_t num = std::strtod(value.c_str(), &failed);
		if (*failed)
		{
			std::cout << "throw" << std::endl;
		}
		if (num > std::numeric_limits<int8_t>::max())
			throw OverflowValue();
		if (num < std::numeric_limits<int8_t>::min())
			throw UnderflowValue();
		retOperand->StringValue = std::to_string(num);
		return (retOperand);
	}
	catch (const std::exception &e)
	{
		std::cout << "\033[1;31m" << e.what() << "\x1B[0m" << std::endl;
		exit(0);
	}
}

IOperand const *Factory::createInt16(std::string const &value) const
{
	class Int16 *retOperand = new class Int16();
	char *failed;
	try
	{
		int64_t num = std::strtod(value.c_str(), &failed);
		if (*failed)
		{
			std::cout << "throw" << std::endl;
		}
		if (num > std::numeric_limits<int16_t>::max())
			throw OverflowValue();
		if (num < std::numeric_limits<int16_t>::min())
			throw UnderflowValue();
		retOperand->StringValue = std::to_string(num);
		return (retOperand);
	}
	catch (const std::exception &e)
	{
		std::cout << "\033[1;31m" << e.what() << "\x1B[0m" << std::endl;
		exit(0);
	}
}

IOperand const *Factory::createInt32(std::string const &value) const
{
	class Int32 *retOperand = new class Int32();
	char *failed;
	try
	{
		int64_t num = std::strtod(value.c_str(), &failed);
		if (*failed)
		{
			std::cout << "throw" << std::endl;
		}
		if (num > std::numeric_limits<int32_t>::max())
			throw OverflowValue();
		if (num < std::numeric_limits<int32_t>::min())
			throw UnderflowValue();
		retOperand->StringValue = std::to_string(num);
		return (retOperand);
	}
	catch (const std::exception &e)
	{
		std::cout << "\033[1;31m" << e.what() << "\x1B[0m" << std::endl;
		exit(0);
	}
}

IOperand const *Factory::createFloat(std::string const &value) const
{
	class Float *retOperand = new class Float();
	char *failed;
	try
	{
		int64_t num = std::strtod(value.c_str(), &failed);
		if (*failed)
		{
			std::cout << "throw" << std::endl;
		}
		if (num > std::numeric_limits<float>::max())
			throw OverflowValue();
		if (num < std::numeric_limits<float>::min())
			throw UnderflowValue();
		retOperand->StringValue = std::to_string(num);
		return (retOperand);
	}
	catch (const std::exception &e)
	{
		std::cout << "\033[1;31m" << e.what() << "\x1B[0m" << std::endl;
		exit(0);
	}
}

IOperand const *Factory::createDouble(std::string const &value) const
{
	class Double *retOperand = new class Double();
	char *failed;
	try
	{
		int64_t num = std::strtod(value.c_str(), &failed);
		if (*failed)
		{
			std::cout << "throw" << std::endl;
		}
		if (num > std::numeric_limits<double>::max())
			throw OverflowValue();
		if (num < std::numeric_limits<double>::min())
			throw UnderflowValue();
		retOperand->StringValue = std::to_string(num);
		return (retOperand);
	}
	catch (const std::exception &e)
	{
		std::cout << "\033[1;31m" << e.what() << "\x1B[0m" << std::endl;
		exit(0);
	}
}

IOperand const *Factory::createOperand(eOperandType type, std::string const &value) const
{
	std::cout << value << std::endl;
	IOperand const *RetOperand = (*this.*OperandFt[type])(value);
	std::cout << RetOperand->toString();
	return (RetOperand);
}