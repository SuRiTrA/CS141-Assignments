#include<iostream>
using namespace std;

int main(){
	float BS, GS;

	cout << "Enter the base salary: ";
	cin >> BS;

	if(BS<=10000){
		GS = BS + (0.2*BS) + (0.8*BS);
		cout << "Gross salary: " << GS << endl;
	} else if (BS<=20000){
		GS = BS + (0.25*BS) + (0.9*BS);
		cout << "Gross salary: " << GS << endl;
	} else if (BS > 20000){
		GS = BS + (0.3*BS) + (0.95*BS);
		cout << "Gross salary: " << GS << endl;
	}

	return 0;
}
