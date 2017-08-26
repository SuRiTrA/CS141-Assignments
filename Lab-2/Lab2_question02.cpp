#include<iostream>
using namespace std;

int main(){
	float tempF, tempC;

	cout << "Enter the temperature in Celcius: ";
	cin >> tempC;

	tempF = (tempC*1.8)+32;
	cout << "The given temperature in Farenheit is " << tempF << "." << endl;
	
	return 0;
}
