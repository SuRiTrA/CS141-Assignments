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
	int num1, num2, smallerNum, hcf;

	cout << "Enter the first number: ";
	cin >> num1;

	cout << "Enter the second number: ";
	cin >> num2;

	if(num1>=num2){
		smallerNum = num1;
	} else {
		smallerNum = num2;
	}

	for(int i=1; i<smallerNum; ++i){
		if(isFactor(num1, i) && isFactor(num2, i)){
			hcf=i;
		}
	}

	cout << "The HCF is: " << hcf << endl;

	return 0;
}
