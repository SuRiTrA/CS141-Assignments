#include<iostream>
using namespace std;

int main(){
	int year;

	cout << "Enter an year: ";
	cin >> year;

	if(year%4 == 0){
		if(year%100 == 0){
			if(year%400 == 0){
				cout << "The entered year is a leap year." << endl;
			} else{
				cout << "The entered year is not a leap year." << endl;
			}
		} else{
			cout << "The entered year is a leap year." << endl;
		}
	}

	return 0;
}
