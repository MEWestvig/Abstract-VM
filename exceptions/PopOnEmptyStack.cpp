#include "../includes/Exceptions.hpp"

PopOnEmptyStack::PopOnEmptyStack()
{
	return;
}
PopOnEmptyStack::~PopOnEmptyStack() throw()
{
	return;
}
char const *PopOnEmptyStack::PopOnEmptyStack::what() const throw()
{
	return "Cannot pop a value off an empty stack!";
}