#include "../includes/Operands.hpp"

Factory *floatFact = new Factory();

Float::Float(void)
{
	return;
}
Float::~Float(void)
{
	return;
}
class Float &Float::operator=(Float const &rhs)
{
	this->StringValue = rhs.StringValue;
	return (*this);
}
int Float::getPrecision(void) const
{
	return (6);
}
eOperandType Float::getType(void) const
{
	return ::Float;
}
IOperand const *Float::operator+(IOperand const &rhs) const
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
		return (floatFact->createOperand(rhs.getType(), operandString.str()));
	}
	else
	{
		return (floatFact->createOperand(getType(), operandString.str()));
	}
	return (ret);
}
IOperand const *Float::operator-(IOperand const &rhs) const
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
		return (floatFact->createOperand(rhs.getType(), operandString.str()));
	}
	else
	{
		return (floatFact->createOperand(getType(), operandString.str()));
	}
	return (ret);
}
IOperand const *Float::operator*(IOperand const &rhs) const
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
		return (floatFact->createOperand(rhs.getType(), operandString.str()));
	}
	else
	{
		return (floatFact->createOperand(getType(), operandString.str()));
	}
	return (ret);
}
IOperand const *Float::operator/(IOperand const &rhs) const
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
		return (floatFact->createOperand(rhs.getType(), operandString.str()));
	}
	else
	{
		return (floatFact->createOperand(getType(), operandString.str()));
	}
	return (ret);
}
IOperand const *Float::operator%(IOperand const &rhs) const
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
		return (floatFact->createOperand(rhs.getType(), operandString.str()));
	}
	else
	{
		return (floatFact->createOperand(getType(), operandString.str()));
	}
	return (ret);
}
std::string const &Float::toString(void) const
{
	return (this->StringValue);
}