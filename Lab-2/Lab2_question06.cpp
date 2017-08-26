#include<iostream>
using namespace std;

float sqRoot(float num){
	float sqrt=0.00001;	// can only calculate square roots for num > 0.00001
	for(int i=1000; i>=0; --i){
		sqrt = (sqrt + num/sqrt)/2;
	}

	return sqrt;
}

int main(){
	float i;

	cout << "Enter the number (to calculate square root): ";
	cin >> i;

	cout << "The square root is " << sqRoot(i) << "." << endl;
	
	return 0;
}
