#include<iostream>
using namespace std;

float cube(float num){
	float numCube=1;
	for (int i=0; i<3; ++i){
		numCube *= num;
	}

	return numCube;
}

int main(){
	float num;

	cout << "Enter a number: ";
	cin >> num;

	cout << "The cube is: " << cube(num) << endl;

	return 0;
}
