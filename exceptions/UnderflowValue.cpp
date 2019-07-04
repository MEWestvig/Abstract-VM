#include "../includes/Exceptions.hpp"

UnderflowValue::UnderflowValue()
{
	return;
}
UnderflowValue::~UnderflowValue() throw()
{
	return;
}
char const *UnderflowValue::UnderflowValue::what() const throw()
{
	return "Value is lower than the minimum for this data type.";
}