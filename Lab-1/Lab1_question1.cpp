#include<iostream>
using namespace std;
// Write a C++ program to perform input/output of all basic data types.

int main(){
	bool boolean;
	int integer;
	float floatingPt;
	double doubleFloatingPt;
	char character;

	// input of basic data types
	cout << "Enter a boolean value: ";
	cin >> boolean;
	
	cout << "Enter an integer value: ";
	cin >> integer;

	cout << "Enter a floating point value: ";
	cin >> floatingPt;

	cout << "Enter a double floating point value: ";
	cin >> doubleFloatingPt;

	cout << "Enter a character value: ";
	cin >> character;

	cout << endl;

	// output of basic data types
	cout << "Boolean value: " << boolean << endl;
	cout << "Integer value: " << integer << endl;
	cout << "Floating point value: " << floatingPt << endl;
	cout << "Double floating point value: " << doubleFloatingPt << endl;
	cout << "Character value: " << character << endl;

	cout << endl;

	return 0;
}
