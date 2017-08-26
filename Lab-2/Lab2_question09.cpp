#include<iostream>
using namespace std;

int main(){
	float side, area;

	cout << "Enter the side of the equilateral triangle: ";
	cin >> side;

	area = (1.73205/4)*side*side;

	cout << "The area of the triangle is " << area << "." << endl;
	
	return 0;
}
