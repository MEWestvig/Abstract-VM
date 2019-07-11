#ifndef FACTORY_HPP
# define FACTORY_HPP

# include "Includes.hpp"

class Factory
{
private:
	IOperand const *createInt8(std::string const &value) const;
	IOperand const *createInt16(std::string const &value) const;
	IOperand const *createInt32(std::string const &value) const;
	IOperand const *createFloat(std::string const &value) const;
	IOperand const *createDouble(std::string const &value) const;

public:
	Factory();
	~Factory();
	IOperand const *createOperand(eOperandType type, std::string const &value) const;
	typedef IOperand const *(Factory::*OperandFunctions)(std::string const &value) const;
	OperandFunctions OperandFt[5];
};

#endif