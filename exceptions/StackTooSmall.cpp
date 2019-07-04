#include "../includes/Exceptions.hpp"

StackTooSmall::StackTooSmall()
{
	return;
}
StackTooSmall::~StackTooSmall() throw()
{
	return;
}
char const *StackTooSmall::StackTooSmall::what() const throw()
{
	return "Cannot perform this arithmetic operation on a stack of size less than 2!";
}