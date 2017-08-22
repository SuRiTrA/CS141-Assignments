#include<iostream>
using namespace std;
// Write a C++ program to enter length and breadth of a rectangle and find its area.


int main(){
	float length, breadth;

	cout << "This program is supposed to output the area of a rectangle give the length and breadth." << endl << endl;

	cout << "Enter the breadth: ";
	cin >> breadth;

	cout << "Enter the length: ";
	cin >> length;

	cout << endl << "The area is: " << (length*breadth) << " square units." << endl << endl;

	return 0;
}
