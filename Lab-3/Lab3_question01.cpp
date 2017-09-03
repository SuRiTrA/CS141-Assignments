#include<iostream>
using namespace std;

int main(){
	float firstNumber, secondNumber;
	
	cout << "Enter the first number: ";
	cin >> firstNumber;

	cout << "Enter tne second number: ";
	cin >> secondNumber;

	if(firstNumber > secondNumber){
		cout << firstNumber << " is the larger number." << endl;
	} else if (secondNumber > firstNumber){
		cout << secondNumber << " is the larger number." << endl;
	} else if (firstNumber == secondNumber){
		cout << "Both the entered numbers are equal." << endl;
	}

	return 0;
}
