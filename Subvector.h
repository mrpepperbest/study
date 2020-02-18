#pragma once
#include "Stack.h" 
#include <stdio.h>
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
class Subvector : public Stack {
	public:
		Subvector(unsigned int new_capacity);
		Subvector();
		Subvector(int data);
		~Subvector();
		bool push_back(int a);
		int pop_back();
		bool resize(unsigned int new_capacity);
		void shrink_to_fit();
		void clear();
		void print();

	private:
		int* mas;
		unsigned int top;
		unsigned int capacity;
};