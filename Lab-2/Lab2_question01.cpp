#include<iostream>
using namespace std;

int main(){
	float lenCentimeter, lenMeter, lenKilometer;
	
	cout << "Enter the length in centimeters: ";
	cin >> lenCentimeter;

	lenMeter = lenCentimeter/100;
	lenKilometer = lenMeter/1000;

	cout << "The given length in meters is " << lenMeter << "m and in kilometers is " << lenKilometer << "km." << endl;
	
	return 0;
}
