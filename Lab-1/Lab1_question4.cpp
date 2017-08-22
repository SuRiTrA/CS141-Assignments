#include<iostream>
using namespace std;
// Write a C++ program to enter length and breadth of a rectangle and find its perimeter.


int main(){
	float length, breadth;

	cout << "This program is supposed to output the perimeter of a rectangle give the length and breadth." << endl << endl;

	cout << "Enter the breadth: ";
	cin >> breadth;

	cout << "Enter the length: ";
	cin >> length;

	cout << endl << "The perimeter is: " << 2*(length+breadth) << " units." << endl << endl;

	return 0;
}
