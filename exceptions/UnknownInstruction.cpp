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
	return "Instruction does not exist or is spelt incorrectly.";
}