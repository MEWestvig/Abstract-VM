#ifndef OPERANDS_HPP
# define OPERANDS_HPP

#include "Includes.hpp"

class Int8 : public IOperand
{
public:
	int getPrecision(void) const;
	eOperandType getType(void) const;

	IOperand const *operator+(IOperand const &rhs) const;
	IOperand const *operator-(IOperand const &rhs) const;
	IOperand const *operator*(IOperand const &rhs) const;
	IOperand const *operator/(IOperand const &rhs) const;
	IOperand const *operator%(IOperand const &rhs) const;

	std::string const &toString(void) const;

	Int8(void);
	class Int8 &operator=(Int8 const &rhs);
	~Int8(void);
};

class Int16 : public IOperand
{
public:
	int getPrecision(void) const;
	eOperandType getType(void) const;

	IOperand const *operator+(IOperand const &rhs) const;
	IOperand const *operator-(IOperand const &rhs) const;
	IOperand const *operator*(IOperand const &rhs) const;
	IOperand const *operator/(IOperand const &rhs) const;
	IOperand const *operator%(IOperand const &rhs) const;

	std::string const &toString(void) const;

	Int16(void);
	class Int16 &operator=(Int16 const &rhs);
	~Int16(void);
};

class Int32 : public IOperand
{
public:
	int getPrecision(void) const;
	eOperandType getType(void) const;

	IOperand const *operator+(IOperand const &rhs) const;
	IOperand const *operator-(IOperand const &rhs) const;
	IOperand const *operator*(IOperand const &rhs) const;
	IOperand const *operator/(IOperand const &rhs) const;
	IOperand const *operator%(IOperand const &rhs) const;

	std::string const &toString(void) const;

	Int32(void);
	class Int32 &operator=(Int32 const &rhs);
	~Int32(void);
};

class Float : public IOperand
{
public:
	int getPrecision(void) const;
	eOperandType getType(void) const;

	IOperand const *operator+(IOperand const &rhs) const;
	IOperand const *operator-(IOperand const &rhs) const;
	IOperand const *operator*(IOperand const &rhs) const;
	IOperand const *operator/(IOperand const &rhs) const;
	IOperand const *operator%(IOperand const &rhs) const;

	std::string const &toString(void) const;

	Float(void);
	class Float &operator=(Float const &rhs);
	~Float(void);
};

class Double : public IOperand
{
public:
	int getPrecision(void) const;
	eOperandType getType(void) const;

	IOperand const *operator+(IOperand const &rhs) const;
	IOperand const *operator-(IOperand const &rhs) const;
	IOperand const *operator*(IOperand const &rhs) const;
	IOperand const *operator/(IOperand const &rhs) const;
	IOperand const *operator%(IOperand const &rhs) const;

	std::string const &toString(void) const;

	Double(void);
	class Double &operator=(Double const &rhs);
	~Double(void);
};

#endif