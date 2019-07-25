#include "../includes/stackList.hpp"

stackList::stackList(void)
{
	this->size = 0;
	this->head = NULL;
}
stackList::~stackList(void)
{
	std::cout << "LIST DELETED";
}
stackList::stackList(stackList const &src)
{
	*this = src;
	return;
}
stackList &stackList::operator=(stackList const &rhs)
{
	static_cast<void>(rhs);
	return *this;
}
void stackList::add(IOperand const &in)
{
	stackList::Node *node = new stackList::Node();
	node->data = &in;
	node->next = this->head;
	this->head = node;
	this->size++;
}
void stackList::print()
{
	Node *head = this->head;
	int i = 1;
	while (head)
	{
		std::cout << head->data->toString() << std::endl;
		head = head->next;
		i++;
	}
}
void stackList::remove()
{
	Node *deleted = this->head;
	delete (deleted->data);
	this->head = this->head->next;
	deleted->next = NULL;
	size--;
	return;
}
IOperand const *stackList::print(int n)
{
	Node *head = this->head;
	int i = 0;
	while (head)
	{
		if (i == n)
		{
			return (head->data);
		}
		head = head->next;
		i++;
	}
	return NULL;
}

int stackList::getSize()
{
	return size;
}