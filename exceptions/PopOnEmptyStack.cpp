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
	return "Cannot pop a value off an empty stack!";
}