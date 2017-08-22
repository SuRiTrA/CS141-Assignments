#include<iostream>
using namespace std;
// Write a C++ program to enter two numbers and perform all arithmetic operations.

int main(){
	float firstNumber, secondNumber;

	cout << "This program is supposed to perform all arithmetic operations on the given two numbers." << endl;

	cout << "Enter the first number (X): ";
	cin >> firstNumber;

	cout << "Enter the second number (Y): ";
	cin >> secondNumber;

	cout << endl;

	cout << "The sum (X+Y) is: " << firstNumber + secondNumber << "." << endl;
	cout << "The difference (X-Y) is: " << firstNumber - secondNumber << "." << endl;
	cout << "The product (X*Y) is: " << firstNumber * secondNumber << "." << endl;
	cout << "The quotient (X/Y) is: " << firstNumber / secondNumber << "." << endl;
	cout << endl;

	return 0;
}
