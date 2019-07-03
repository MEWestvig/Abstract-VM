#include "../includes/Exceptions.hpp"

MissingFile::MissingFile()
{
	return;
}
MissingFile::~MissingFile() throw()
{
	return;
}
char const *MissingFile::MissingFile::what() const throw()
{
	return "Missing File! Please create the file or enter the correct name.";
}