#include<iostream>
using namespace std;

int main(){
	float tempC, tempF;

	cout << "Enter the temperature in Farenheit: ";
	cin >> tempF;

	tempC = (tempF-32)/1.8;

	cout << "The given temperature in Celcius is " << tempC << "." << endl;
	
	return 0;
}
