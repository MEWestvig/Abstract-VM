#include <iostream>
#include <cstdlib>

class linkedList
{
public:
    class Node
    {
    public:
        Node *next;
        std::string data;
    };
    linkedList(void);
    ~linkedList(void);
    linkedList(linkedList const &src);
    linkedList &operator=(linkedList const &rhs);
    void add(std::string str);
    void print();
    void remove(int n);
    std::string print(int n);

private:
    Node *head;
    int length;
};