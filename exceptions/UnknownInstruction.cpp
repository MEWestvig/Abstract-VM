#include "../includes/Exceptions.hpp"

UnknownInstruction::UnknownInstruction()
{
	return;
}
UnknownInstruction::~UnknownInstruction() throw()
{
	return;
}
char const *UnknownInstruction::UnknownInstruction::what() const throw()
{
	return "Instruction does not exist or is spelt incorrectly.";
}