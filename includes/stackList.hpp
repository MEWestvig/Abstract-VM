#ifndef STACKLIST_HPP
# define STACKLIST_HPP

# include "Includes.hpp"

class stackList
{
public:
	class Node
	{
	public:
		Node *next;
		Node *previous;
		IOperand const *data;
	};
	stackList(void);
	~stackList(void);
	stackList(stackList const &src);
	stackList &operator=(stackList const &rhs);
	void add(IOperand const &in);
	void print();
	void remove(int n);
	IOperand const *print(int n);
	int getSize();

private:
	Node *head;
	int size;
};

#endif