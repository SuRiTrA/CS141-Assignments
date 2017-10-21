#include<iostream>
using namespace std;

int main() {
	int a=0, b=0;
	int* p;

	p=&a;
	cout << a << "\t" << b << "\t" << *p << endl;

	a=2;
	b=3;
	cout << a << "\t" << b << "\t" << *p << endl;

	p=&b;
	cout << a << "\t" << b << "\t" << *p << endl;

	return 0;
}
