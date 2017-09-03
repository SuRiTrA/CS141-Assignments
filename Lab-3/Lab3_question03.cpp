#include<iostream>
using namespace std;

int main(){
	float num;

	cout << "Enter a number: ";
	cin >> num;

	if(num > 0){
		cout << "The entered number is positive." << endl;
	} else if(num == 0){
		cout << "The entered number is zero." << endl;
	} else if(num < 0){
		cout << "The entered number is negative." << endl;
	}

	return 0;
}
