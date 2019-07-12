#include "../includes/Operands.hpp"

Factory *int32Fact = new Factory();

Int32::Int32(void)
{
	return;
}
Int32::~Int32(void)
{
	return;
}
class Int32 &Int32::operator=(Int32 const &rhs)
{
	this->StringValue = rhs.StringValue;
	return (*this);
}
int Int32::getPrecision(void) const
{
	return (1);
}
eOperandType Int32::getType(void) const
{
	return ::Int32;
}
IOperand const *Int32::operator+(IOperand const &rhs) const
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
		return (int32Fact->createOperand(rhs.getType(), operandString.str()));
	}
	else
	{
		return (int32Fact->createOperand(getType(), operandString.str()));
	}
	return (ret);
}
IOperand const *Int32::operator-(IOperand const &rhs) const
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
		return (int32Fact->createOperand(rhs.getType(), operandString.str()));
	}
	else
	{
		return (int32Fact->createOperand(getType(), operandString.str()));
	}
	return (ret);
}
IOperand const *Int32::operator*(IOperand const &rhs) const
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
		return (int32Fact->createOperand(rhs.getType(), operandString.str()));
	}
	else
	{
		return (int32Fact->createOperand(getType(), operandString.str()));
	}
	return (ret);
}
IOperand const *Int32::operator/(IOperand const &rhs) const
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
		return (int32Fact->createOperand(rhs.getType(), operandString.str()));
	}
	else
	{
		return (int32Fact->createOperand(getType(), operandString.str()));
	}
	return (ret);
}
IOperand const *Int32::operator%(IOperand const &rhs) const
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
		return (int32Fact->createOperand(rhs.getType(), operandString.str()));
	}
	else
	{
		return (int32Fact->createOperand(getType(), operandString.str()));
	}
	return (ret);
}
std::string const &Int32::toString(void) const
{
	return (this->StringValue);
}