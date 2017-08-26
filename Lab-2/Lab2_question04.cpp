#include<iostream>
using namespace std;

int main(){
	float days, weeks, years;

	cout << "Enter the number of days: ";
	cin >> days;

	weeks = days/7;
	years = days/365;

	cout << days << "days is equivalent to " << weeks << " weeks or " << years << " years." << endl;
	
	return 0;
}
