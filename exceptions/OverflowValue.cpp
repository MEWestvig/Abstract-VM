#include "../includes/Exceptions.hpp"

OverflowValue::OverflowValue()
{
	return;
}
OverflowValue::~OverflowValue() throw()
{
	return;
}
char const *OverflowValue::OverflowValue::what() const throw()
{
	return "Value exceeds the maximum for this data type.";
}