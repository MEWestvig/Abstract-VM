#include "../includes/Exceptions.hpp"

MissingCommand::MissingCommand()
{
	return;
}
MissingCommand::~MissingCommand() throw()
{
	return;
}
char const *MissingCommand::MissingCommand::what() const throw()
{
	return "Missing command! Please end command list with \"exit\"";
}