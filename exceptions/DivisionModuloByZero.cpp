#include "../includes/Exceptions.hpp"

DivisionModuloByZero::DivisionModuloByZero()
{
	return;
}
DivisionModuloByZero::~DivisionModuloByZero() throw()
{
	return;
}
char const *DivisionModuloByZero::DivisionModuloByZero::what() const throw()
{
	return "Cannot divide or modulo by 0!";
}