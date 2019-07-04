#ifndef OPERANDS_HPP
# define OPERANDS_HPP

#include "../interfaces/IOperand.hpp"

class Int8 : public IOperand
{
public:
	int getPrecision(void);
	eOperandType getType(void);

	IOperand const *operator+(IOperand const &rhs);
	IOperand const *operator-(IOperand const &rhs);
	IOperand const *operator*(IOperand const &rhs);
	IOperand const *operator/(IOperand const &rhs);
	IOperand const *operator%(IOperand const &rhs);

	std::string const &toString(void);

	~Int8(void) {}
};

class Int16 : public IOperand
{
public:
	int getPrecision(void);
	eOperandType getType(void);

	IOperand const *operator+(IOperand const &rhs);
	IOperand const *operator-(IOperand const &rhs);
	IOperand const *operator*(IOperand const &rhs);
	IOperand const *operator/(IOperand const &rhs);
	IOperand const *operator%(IOperand const &rhs);

	std::string const &toString(void);

	~Int16(void) {}
};

class Int32 : public IOperand
{
public:
	int getPrecision(void);
	eOperandType getType(void);

	IOperand const *operator+(IOperand const &rhs);
	IOperand const *operator-(IOperand const &rhs);
	IOperand const *operator*(IOperand const &rhs);
	IOperand const *operator/(IOperand const &rhs);
	IOperand const *operator%(IOperand const &rhs);

	std::string const &toString(void);

	~Int32(void) {}
};

class Float : public IOperand
{
public:
	int getPrecision(void);
	eOperandType getType(void);

	IOperand const *operator+(IOperand const &rhs);
	IOperand const *operator-(IOperand const &rhs);
	IOperand const *operator*(IOperand const &rhs);
	IOperand const *operator/(IOperand const &rhs);
	IOperand const *operator%(IOperand const &rhs);

	std::string const &toString(void);

	~Float(void) {}
};

class Double : public IOperand
{
public:
	int getPrecision(void);
	eOperandType getType(void);

	IOperand const *operator+(IOperand const &rhs);
	IOperand const *operator-(IOperand const &rhs);
	IOperand const *operator*(IOperand const &rhs);
	IOperand const *operator/(IOperand const &rhs);
	IOperand const *operator%(IOperand const &rhs);

	std::string const &toString(void);

	~Double(void) {}
};

#endif