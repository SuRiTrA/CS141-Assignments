#include<iostream>
using namespace std;

float exp(float base, int pow){
	float ans=1;

	while(pow>0){
		ans=ans*base;
		--pow;
	}

	return ans;
}


int main(){
	float base;
	int pow;

	cout << "Enter the base: ";
	cin >> base;

	cout << "Enter the exponent: ";
	cin >> pow;

	cout << "The result is: " << exp(base, pow) << endl;
	
	return 0;
}
