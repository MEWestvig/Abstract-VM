#include "../includes/Operands.hpp"

Factory *doubleFact = new Factory();

Double::Double(void)
{
	return;
}
Double::~Double(void)
{
	return;
}
class Double &Double::operator=(Double const &rhs)
{
	this->StringValue = rhs.StringValue;
	return (*this);
}
int Double::getPrecision(void) const
{
	return (15);
}
eOperandType Double::getType(void) const
{
	return ::Double;
}
IOperand const *Double::operator+(IOperand const &rhs) const
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
		return (doubleFact->createOperand(rhs.getType(), operandString.str()));
	}
	else
	{
		return (doubleFact->createOperand(getType(), operandString.str()));
	}
	return (ret);
}
IOperand const *Double::operator-(IOperand const &rhs) const
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
		return (doubleFact->createOperand(rhs.getType(), operandString.str()));
	}
	else
	{
		return (doubleFact->createOperand(getType(), operandString.str()));
	}
	return (ret);
}
IOperand const *Double::operator*(IOperand const &rhs) const
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
		return (doubleFact->createOperand(rhs.getType(), operandString.str()));
	}
	else
	{
		return (doubleFact->createOperand(getType(), operandString.str()));
	}
	return (ret);
}
IOperand const *Double::operator/(IOperand const &rhs) const
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
		return (doubleFact->createOperand(rhs.getType(), operandString.str()));
	}
	else
	{
		return (doubleFact->createOperand(getType(), operandString.str()));
	}
	return (ret);
}
IOperand const *Double::operator%(IOperand const &rhs) const
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
		return (doubleFact->createOperand(rhs.getType(), operandString.str()));
	}
	else
	{
		return (doubleFact->createOperand(getType(), operandString.str()));
	}
	return (ret);
}
std::string const &Double::toString(void) const
{
	return (this->StringValue);
}