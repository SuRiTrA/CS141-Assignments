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

int factorial(int i){
	int fact=1;
	while(i>0){
		fact *= i;
		--i;
	}

	return fact;
}

bool isStrong(int number){
	int sumDigitFactorial=0;

	for(int i=1; i<=numDigits(number); ++i){
		sumDigitFactorial += factorial(nthDigit(number, i));
	}

	return (number==sumDigitFactorial);
}


int main(){
	int n;

	cout << "Enter a number: ";
	cin >> n;
	
	if(isStrong(n)){
		cout << n << " is a strong number." << endl;
	} else {
		cout << n << " is not a strong number." << endl;
	}

	return 0;
}
