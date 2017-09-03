#include<iostream>
using namespace std;

int main(){
	float angle1, angle2, angle3;

	cout << "Enter the three angles (in degrees) of the triangle:" << endl;
	cin >> angle1 >> angle2 >> angle3;

	if(angle1+angle2+angle3 == 180){
		cout << "The triangle is valid." << endl;
	} else {
		cout << "The triangle is invalid." << endl;
	}

	return 0;
}
