#include<iostream>
using namespace std;

int factorial(int i){
	int fact=1;
	while(i>0){
		fact *= i;
		--i;
	}

	return fact;
}

int main(){
	int number;
	cout << "Enter number: ";
	cin >> number;

	cout << number << "! = " << factorial(number) << endl;
	
	return 0;
}
