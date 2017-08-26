#include<iostream>
using namespace std;

int main(){
	float sub1, sub2, sub3, sub4, sub5, max, total, avg, percent;

	cout << "Enter the marks of the five subjects: ";
	cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;
	
	cout << "Enter the max marks for the five subjects: ";
	cin >> max;

	total = sub1 + sub2 + sub3 + sub4 + sub5;
	avg = total/5;
	percent = (total*100)/(max*5);

	cout << "Total marks: " << total << endl;
	cout << "Average marks: " << avg << endl;
	cout << "Percentage marks: " << percent << endl;
	
	return 0;
}
