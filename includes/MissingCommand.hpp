#include <iostream>
#include <exception>

class MissingCommand : public std::exception
{
public:
	MissingCommand(void);
	~MissingCommand(void) throw();
	virtual char const *what() const throw();
};