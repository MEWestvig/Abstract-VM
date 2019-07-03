#include <iostream>
#include <exception>

class MissingCommand : public std::exception
{
public:
	MissingCommand(void);
	~MissingCommand(void) throw();
	virtual char const *what() const throw();
};
class MissingFile : public std::exception
{
public:
	MissingFile(void);
	~MissingFile(void) throw();
	virtual char const *what() const throw();
};
class UnknownInstruction : public std::exception
{
public:
	UnknownInstruction(void);
	~UnknownInstruction(void) throw();
	virtual char const *what() const throw();
};
class OverflowValue : public std::exception
{
public:
	OverflowValue(void);
	~OverflowValue(void) throw();
	virtual char const *what() const throw();
};
class UnderflowValue : public std::exception
{
public:
	UnderflowValue(void);
	~UnderflowValue(void) throw();
	virtual char const *what() const throw();
};
class PopOnEmptyStack : public std::exception
{

};
class DivisionModuloByZero : public std::exception
{

};
class AssertNotTrue : public std::exception
{

};
class StackTooSmall : public std::exception
{

};