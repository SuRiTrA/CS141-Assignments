#include<iostream>
using namespace std;

int main() {
	bool B;
	bool *Bp;

	int I;
	int *Ip;

	float F;
	float Fp;

	double D;
	double Dp;

	char C;
	char *Cp;

	cout << "Integer: " << sizeof(I) << "\t" << sizeof(Ip) << endl;
	cout << "Boolean: " << sizeof(B) << "\t" << sizeof(Bp) << endl;
	cout << "Float: " << sizeof(F) << "\t" << sizeof(Fp) << endl;
	cout << "Double: " << sizeof(D) << "\t" << sizeof(Dp) << endl;
	cout << "Char: " << sizeof(C) << "\t" << sizeof(Cp) << endl;

	return 0;
}
