#include<iostream>
using namespace std;

int sqrt(float num){
	float sqrt=0.00001;	// can only calculate square roots for num > 0.00001
	for(int i=1000; i>=0; --i){
		sqrt = (sqrt + num/sqrt)/2;
	}

	int foo = int(sqrt);

	return foo;
}

bool isPrime(int number){
	int i = sqrt(number)+1;

	while(i>1){
		if(number == 2){
			return 1;
		} else if(number%i == 0){
			return 0;
		}
		
		--i;
	}

	return 1;
}

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

bool isArmstrong(int number){
	int sumPow=0;

	for(int i=1; i<=numDigits(number); ++i){
		sumPow += exp(nthDigit(number, i), numDigits(number));
	}

	return (sumPow==number);

}

bool isPerfect(int number){
	int sumFactors=0;
	for(int i=1; i<((number/2)+1); ++i){
		if(number%i == 0){
			sumFactors += i;
		}
	}
	
	return (sumFactors==number);
}

int main(){
	int n;

	cout << "Enter n = ";
	cin >> n;

	if(isPrime(n)){
		cout << "n is prime." << endl;
	} else {
		cout << "n is composite." << endl;
	}

	if(isArmstrong(n)){
		cout << "n is an Armstrong number." << endl;
	} else {
		cout << "n is not an Armstrong number." << endl;
	}

	if(isPerfect(n)){
		cout << "n is a Perfect number." << endl;
	} else {
		cout << "n is not a Perfect number." << endl;
	}

	return 0;
}
