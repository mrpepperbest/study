#pragma once
#include <iostream>
#include <stdio.h>
using namespace std;
class Stack {
protected:
public:
	Stack() {};
	~Stack() {};
	virtual bool push_back(int d)=0;
	virtual int pop_back()=0;
	virtual void print() {};
private:
};
///