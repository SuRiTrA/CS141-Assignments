#include<iostream>
using namespace std;

int main(){
	float units, bill;

	cout << "Enter the number of units used: ";
	cin >> units;

	if(units<=50){
		bill = 1.2*(0.5*units);
		cout << "Bill: Rs. " << bill << endl;
	} else if(units<150){
		bill = 1.2*((50*0.5)+((units-50)*0.75));
		cout << "Bill: Rs. " << bill << endl;
	} else if(units<=250){
		bill = 1.2*((50*0.5) + (100*0.75) + ((units-150)*1.2));
		cout << "Bill: Rs. " << bill << endl;
	} else if(units>250){
		bill = 1.2*((50*0.5) + (100*0.75) + (100*1.2) + ((units-250)*1.5));
		cout << "Bill: Rs. " << bill << endl;
	}

	return 0;
}
