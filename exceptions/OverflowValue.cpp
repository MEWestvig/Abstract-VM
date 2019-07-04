#include "../includes/Exceptions.hpp"

AssertNotTrue::AssertNotTrue()
{
	return;
}
AssertNotTrue::~AssertNotTrue() throw()
{
	return;
}
char const *AssertNotTrue::AssertNotTrue::what() const throw()
{
	return "Value exceeds the maximum for this data type.";
}