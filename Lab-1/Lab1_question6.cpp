#include<iostream>
//#include<cmath>
using namespace std;
// Write a C++ program to enter radius of a circle and find its diameter, circumference and area.

int main(){
	float diameter, radius, circumference, area;
//	float pi = acos(-1.0);
	float pi = 3.14159;

	cout << "This program is supposed to output the radius, circumference and the area of a circle with a given diameter." << endl << endl;
	
	cout << "Enter the diameter of the circle: ";
	cin >> diameter;
	cout << endl;

	radius = diameter/2;
	circumference = pi*diameter;
	area = pi*radius*radius;

	cout << "The circle has radius: " << radius << " units." << endl;
	cout << "The circle has circumference: " << circumference << " units." << endl;
	cout << "The circle has area: " << area << " square units." << endl;
	cout << endl;

	return 0;
}
