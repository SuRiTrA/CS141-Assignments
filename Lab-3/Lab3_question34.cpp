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

int nthDigit(int number, int n){
	int nth = (number/(exp(10, (numDigits(number)-n))))%10;
	return nth;
}

int main(){
	int num, revNum;

	cout << "Enter a number: ";
	cin >> num;

	int firstDigit = nthDigit(num, 1);
	int lastDigit = nthDigit(num, numDigits(num));

	revNum = (num-lastDigit)- (firstDigit*exp(10, (numDigits(num)-1))) + firstDigit + (lastDigit*exp(10, (numDigits(num)-1)));

	cout << "Number with first and last digits interchanged: " << revNum << endl;

	return 0;
}
