#include<iostream>
using namespace std;

int numDigits(int n){
	int i=0;
	while(n>0){
		n /= 10;
		++i;
	}

	return i;
}

int exp(int base, int exponent){
	int ans=1;
	while(exponent>0){
		ans *= base;
		--exponent;
	}

	return ans;
}

int main(){

	int num, lastDigit, firstDigit, sum;

	cout << "Enter number: ";
	cin >> num;

	lastDigit = num%10;
	firstDigit = num/(exp(10, (numDigits(num)-1)));

	sum = firstDigit + lastDigit;

	cout << "The sum of the first and last digit is: " << sum << endl;

	return 0;
}
