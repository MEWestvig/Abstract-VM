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
	return "Cannot divide or modulo by 0!";
}