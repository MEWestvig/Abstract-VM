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
	return "Cannot perform this arithmetic operation on a stack of size less than 2!";
}