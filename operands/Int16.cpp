#include "../includes/Operands.hpp"

Factory *f = new Factory();

Int16::Int16(void)
{
	return;
}
Int16::Int16(Int16 const &src)
{
	*this = src;
	return;
}
Int16::~Int16(void)
{
	return;
}
class Int16 &Int16::operator=(Int16 const &rhs)
{
	this->StringValue = rhs.StringValue;
	return (*this);
}
int Int16::getPrecision(void) const
{
	return (1);
}
eOperandType Int16::getType(void) const
{
	return ::Int16;
}
IOperand const *Int16::operator+(IOperand const &rhs) const
{
	double thisVal;
	double secondVal;
	double result;
	IOperand *ret;
	std::stringstream operandString;

	thisVal = std::strtod(this->StringValue.c_str(), 0);
	secondVal = std::strtod(rhs.StringValue.c_str(), 0);
	result = thisVal + secondVal;
	operandString << result;
	if (getType() < rhs.getType())
	{
		return (f->createOperand(rhs.getType(), operandString.str()));
	}
	else
	{
		return (f->createOperand(this->getType(), operandString.str()));
	}
	return (ret);
}
IOperand const *Int16::operator-(IOperand const &rhs) const
{
	double thisVal;
	double secondVal;
	double result;
	IOperand *ret;
	std::stringstream operandString;

	thisVal = std::strtod(this->StringValue.c_str(), 0);
	secondVal = std::strtod(rhs.StringValue.c_str(), 0);
	result = thisVal - secondVal;
	operandString << result;
	if (getType() < rhs.getType())
	{
		return (f->createOperand(rhs.getType(), operandString.str()));
	}
	else
	{
		return (f->createOperand(this->getType(), operandString.str()));
	}
	return (ret);
}
IOperand const *Int16::operator*(IOperand const &rhs) const
{
	double thisVal;
	double secondVal;
	double result;
	IOperand *ret;
	std::stringstream operandString;

	thisVal = std::strtod(this->StringValue.c_str(), 0);
	secondVal = std::strtod(rhs.StringValue.c_str(), 0);
	result = thisVal * secondVal;
	operandString << result;
	if (getType() < rhs.getType())
	{
		return (f->createOperand(rhs.getType(), operandString.str()));
	}
	else
	{
		return (f->createOperand(this->getType(), operandString.str()));
	}
	return (ret);
}
IOperand const *Int16::operator/(IOperand const &rhs) const
{
	double thisVal;
	double secondVal;
	double result;
	IOperand *ret;
	std::stringstream operandString;

	thisVal = std::strtod(this->StringValue.c_str(), 0);
	secondVal = std::strtod(rhs.StringValue.c_str(), 0);
	result = thisVal / secondVal;
	operandString << result;
	if (getType() < rhs.getType())
	{
		return (f->createOperand(rhs.getType(), operandString.str()));
	}
	else
	{
		return (f->createOperand(this->getType(), operandString.str()));
	}
	return (ret);
}
IOperand const *Int16::operator%(IOperand const &rhs) const
{
	double thisVal;
	double secondVal;
	double result;
	IOperand *ret;
	std::stringstream operandString;

	thisVal = std::strtod(this->StringValue.c_str(), 0);
	secondVal = std::strtod(rhs.StringValue.c_str(), 0);
	result = fmod(thisVal, secondVal);
	operandString << result;
	if (getType() < rhs.getType())
	{
		return (f->createOperand(rhs.getType(), operandString.str()));
	}
	else
	{
		return (f->createOperand(this->getType(), operandString.str()));
	}
	return (ret);
}
std::string const &Int16::toString(void) const
{
	return (this->StringValue);
}