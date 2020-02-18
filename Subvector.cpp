#include <stdio.h>
#include <cmath>
#include <iostream>
#include <iomanip>
#include "Subvector.h"
using namespace std;
Subvector::Subvector() {
	this->mas = new int[0];
	this->capacity = 0;
	this->top = 0;
	cout << "Created!" << endl;
}
Subvector::Subvector(int data) {
	this->mas = new int[1];
	this->capacity = 1;
	this->top = 1;
	this->mas[0] = data;
	cout << "Created!" << endl;
}
Subvector::Subvector(unsigned int new_capacity) {
	this->mas = new int[new_capacity];
	this->capacity = new_capacity;
	this->top = 0;
	cout << "Created!" << endl;
}
Subvector::~Subvector() {
	delete[] this->mas;
	this->capacity = 0;
	this->top = 0;
	this->mas = nullptr;
	cout << "Removed!" << endl;
}
void Subvector :: print() {
	for (int i = 0; i < this->top; i++) {
		cout << this->mas[i] << " ";
	}
	cout << endl;
}
bool Subvector::push_back(int a) {
	int* s1 = nullptr;
	unsigned int i;
	if ((this->top) < (this->capacity)) {
		this->mas[this->top] = a;
		this->top++;
	}
	else {
		s1 = new int[this->capacity + 1];
		for (i = 0; i < (this->capacity); i++) {
			s1[i] = this->mas[i];
		}
		delete[] this->mas;
		this->mas = s1;
		this->top++;
		this->capacity++;
		this->mas[this->top - 1] = a;
	}
	if (this->mas == nullptr)  return false;
	return true;
}
int Subvector::pop_back() {
	int* a = nullptr;
	unsigned int i, b;
	b = this->mas[this->top - 1];
	a = new int[this->top - 1];
	for (i = 0; i < (this->top - 1); i++) {
		a[i] = this->mas[i];
	}
	delete[] this->mas;
	this->mas = a;
	this->top--;
	this->capacity = this->top;
	return b;
}
bool Subvector::resize(unsigned int new_capacity) {
	int* a = nullptr;
	unsigned int i;
	a = new int[new_capacity];
	if (this->top <= new_capacity) {
		for (i = 0; i < (this->top); i++)
			a[i] = this->mas[i];
	}
	else {
		for (i = 0; i < (new_capacity); i++)
			a[i] = this->mas[i];
		this->top = new_capacity;
	}
	if (this->mas != nullptr) {
		delete[] this->mas;
	}
	this->mas = a;
	this->capacity = new_capacity;
	if (this->mas == nullptr) { return false; }
	cout << "Resizing done!" << endl;
	return true;
}
void Subvector::shrink_to_fit() {
	if (this->capacity > this->top) {
		int* a = nullptr;
		unsigned int i;
		a = new int[this->top];
		for (i = 0; i < (this->top); i++)
			a[i] = this->mas[i];
		if ((this->mas) != nullptr) {
			delete[] this->mas;
		}
		this->mas = a;
		this->capacity = this->top;
	}
	cout << "Shrinking done!" << endl;
}
void Subvector::clear() {
	int i;
	if ((this->mas) != nullptr) {
		for (i = 0; i < this->top; ++i) {
			this->mas[i] = '\0';
		}
	}
	this->top = '\0';
	this->capacity = '\0';
	cout << "Clear!" << endl;
}

