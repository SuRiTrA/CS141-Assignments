#include<iostream>
using namespace std;

int main(){
	int numMonth;

	cout << "Enter the month number: ";
	cin >> numMonth;

	if(numMonth==2){
		cout << "The month has 28 days." << endl;
	} else if(numMonth == 1 || numMonth == 3 || numMonth == 5 || numMonth == 7 || numMonth == 8 || numMonth == 10 || numMonth == 12){
		cout << "The month has 31 days." << endl;
	} else if(numMonth == 4 || numMonth == 6 || numMonth == 9 || numMonth == 11){
		cout << "The month has 30 days." << endl;
	} else{
		cout << "There is no " << numMonth << "th month." << endl;
	}

	return 0;
}
