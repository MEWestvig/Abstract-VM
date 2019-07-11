#include "../includes/Operands.hpp"

Factory *fai = new Factory();

Int8::Int8(void)
{
	return;
}
Int8::~Int8(void)
{
	return;
}
class Int8 &Int8::operator=(Int8 const &rhs)
{
	this->StringValue = rhs.StringValue;
	return (*this);
}
int Int8::getPrecision(void) const
{
	return (1);
}
eOperandType Int8::getType(void) const
{
	return ::Int8;
}
IOperand const *Int8::operator+(IOperand const &rhs) const
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
		return (fai->createOperand(rhs.getType(), operandString.str()));
	}
	else
	{
		return (fai->createOperand(this->getType(), operandString.str()));
	}
	return (ret);
}
IOperand const *Int8::operator-(IOperand const &rhs) const
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
		return (fai->createOperand(rhs.getType(), operandString.str()));
	}
	else
	{
		return (fai->createOperand(this->getType(), operandString.str()));
	}
	return (ret);
}
IOperand const *Int8::operator*(IOperand const &rhs) const
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
		return (fai->createOperand(rhs.getType(), operandString.str()));
	}
	else
	{
		return (fai->createOperand(this->getType(), operandString.str()));
	}
	return (ret);
}
IOperand const *Int8::operator/(IOperand const &rhs) const
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
		return (fai->createOperand(rhs.getType(), operandString.str()));
	}
	else
	{
		return (fai->createOperand(this->getType(), operandString.str()));
	}
	return (ret);
}
IOperand const *Int8::operator%(IOperand const &rhs) const
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
		return (fai->createOperand(rhs.getType(), operandString.str()));
	}
	else
	{
		return (fai->createOperand(this->getType(), operandString.str()));
	}
	return (ret);
}
std::string const &Int8::toString(void) const
{
	return (this->StringValue);
}