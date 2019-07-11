#include "../includes/Exceptions.hpp"

NaN::NaN()
{
	return;
}
NaN::~NaN() throw()
{
	return;
}
char const *NaN::NaN::what() const throw()
{
	return "NaN Error.";
}