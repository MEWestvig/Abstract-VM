#ifndef COMMANDS_HPP
#define COMMANDS_HPP

#include "Includes.hpp"

class Commands
{
private:
    stackList *stack;

public:
    Commands(stackList &input);
    void Check_input(std::string command);
    void Push(std::string command);
    void Assert(std::string command);
    void Print();
    void Dump();
    eOperandType setType(std::string type);
    ~Commands();
    void Pop();
    void Add();
    void Sub();
    void Mul();
    void Div();
    void Mod();
};

#endif