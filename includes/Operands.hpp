#ifndef OPERANDS_HPP
#define OPERANDS_HPP

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
	Int8(Int8 const &src);
	Int8 &operator=(Int8 const &rhs);
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
	Int16(Int16 const &src);
	Int16 &operator=(Int16 const &rhs);
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
	Int32(Int32 const &src);
	Int32 &operator=(Int32 const &rhs);
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
	Float(Float const &src);
	Float &operator=(Float const &rhs);
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
	Double(Double const &src);
	Double &operator=(Double const &rhs);
	~Double(void);
};

#endif