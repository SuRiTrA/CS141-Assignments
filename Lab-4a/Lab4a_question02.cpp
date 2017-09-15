#include<iostream>
#include<cmath>
using namespace std;

float pi = 3.14159;

float diameter(float radius){
	float d = 2* radius;
	return d;
}

float circumference(float radius){
	float c = 2*pi*radius;
	return c;
}

float area(float radius){
	float a = pi*radius*radius;
	return a;
}

int main(){
	int radius;
	cout << "Enter radius: ";
	cin >> radius;

	cout << "Diameter: " << diameter(radius) << endl;
	cout << "Circumference: " << circumference(radius) << endl;
	cout << "Area: " << area(radius) << endl;

	return 0;
}
