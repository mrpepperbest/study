#include "Sublist.h"
#include "Subvector.h"
int main() {
	Subvector a;
	a.print();
	a.push_back(228);
	a.print();
	a.push_back(1337);
	a.print();
	cout << a.pop_back();
	a.print();
	a.resize(10);
	a.print();
	a.push_back(666);
	a.print();
	a.resize(1);
	a.print();
	a.push_back(666);
	a.print();
	a.shrink_to_fit();
	a.print();
	a.clear();
	a.print();
	Sublist guy;
	guy.push_back(228);	guy.push_back(322);	guy.push_back(1000); guy.push_back(1337);
	guy.print();	cout << endl;
	guy.pop_back();
	guy.print();	cout << endl;
	guy.push_forward(666);
	guy.print();	cout << endl;
	guy.pop_forward();
	guy.print();	cout << endl;
	guy.push_where(2, 13);
	guy.print();	cout << endl;
	guy.erase_where(2);
	guy.print();	cout << endl;
	cout << guy.size();
	guy.push_where(2, 13);
	cout << endl;
	guy.print();	cout << endl;
	cout << guy.size();
	return 0;
}