#ifndef EXCEPTIONS_HPP
# define EXCEPTIONS_HPP

# include "Includes.hpp"

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
public:
	PopOnEmptyStack(void);
	~PopOnEmptyStack(void) throw();
	virtual char const *what() const throw();
};
class DivisionModuloByZero : public std::exception
{
public:
	DivisionModuloByZero(void);
	~DivisionModuloByZero(void) throw();
	virtual char const *what() const throw();
};
class AssertNotTrue : public std::exception
{
public:
	AssertNotTrue(void);
	~AssertNotTrue(void) throw();
	virtual char const *what() const throw();
};
class StackTooSmall : public std::exception
{
public:
	StackTooSmall(void);
	~StackTooSmall(void) throw();
	virtual char const *what() const throw();
};
class NaN : public std::exception
{
public:
	NaN(void);
	~NaN(void) throw();
	virtual char const *what() const throw();
};

#endif