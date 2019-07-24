#include "../includes/Exceptions.hpp"

StackWayTooSmall::StackWayTooSmall()
{
	return;
}
StackWayTooSmall::~StackWayTooSmall() throw()
{
	return;
}
char const *StackWayTooSmall::StackWayTooSmall::what() const throw()
{
	return "Stack needs to be bigger than 0!";
}