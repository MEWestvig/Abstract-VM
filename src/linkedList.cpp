#include "../includes/linkedList.hpp"

linkedList::linkedList(void)
{
	this->size = 0;
	this->head = NULL;
}
linkedList::~linkedList(void)
{
	std::cout << "LIST DELETED";
}
linkedList::linkedList(linkedList const &src)
{
	*this = src;
	return;
}
linkedList &linkedList::operator=(linkedList const &rhs)
{
	static_cast<void>(rhs);
	return *this;
}
void linkedList::add(std::string str)
{
	linkedList::Node *node = new linkedList::Node();
	node->data = str;
	node->next = this->head;
	this->head = node;
	this->size++;
}
void linkedList::print()
{
	Node *head = this->head;
	int i = 1;
	while (head)
	{
		std::cout << i << ": " << head->data << std::endl;
		head = head->next;
		i++;
	}
}
void linkedList::remove(int n)
{
	std::cout << n << std::endl;
	return;
}
std::string linkedList::print(int n)
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
	return ("not found");
}

int linkedList::getSize()
{
	return size;
}