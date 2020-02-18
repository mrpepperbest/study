#pragma once
#include "Stack.h"
#include <iostream>
#include <stdio.h>
using namespace std;
struct block {
	int data;
	block* next;
};
class Sublist : public Stack {
public:
	Sublist();
	~Sublist();
	bool push_back(int d);
	int pop_back();
	bool push_forward(int d);
	int pop_forward();
	bool push_where(unsigned int where, int d);
	bool erase_where(unsigned int where);
	unsigned int size();
	void print();

private:
	block* head;
};