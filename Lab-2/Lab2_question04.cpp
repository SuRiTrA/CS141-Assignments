#include<iostream>
using namespace std;

int main(){
	int days, weeks, years, wdays, ymonths, ydays;

	cout << "Enter the number of days: ";
	cin >> days;

	weeks = days/7;
	wdays = days%7;

	years = days/365;
	ymonths = (days%365)/30;
	ydays = ymonths%30;

	cout << days << " days is equivalent to " << weeks << " weeks and " << wdays << " days." << endl;
	cout << days << " days is equivalent to " << years << " years, " << ymonths << " months and " << ydays << " days." << endl;

	return 0;
}
