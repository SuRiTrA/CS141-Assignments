#include<iostream>
using namespace std;

bool isFactor(int number, int fact){
	if(number%fact == 0){
		return 1;
	} else {
		return 0;
	}
}

int main(){
	int num1, num2, lcm;

	cout << "Enter the first number: ";
	cin >> num1;

	cout << "Enter the second number: ";
	cin >> num2;

	for(int i=(num1*num2); i>0; --i){
		if(isFactor(i, num1) && isFactor(i, num2)){
			lcm = i;
		}
	}

	cout << "The LCM is: " << lcm << endl;

	return 0;
}
