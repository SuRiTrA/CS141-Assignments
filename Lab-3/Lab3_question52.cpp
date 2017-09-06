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

bool isArmstrong(int number){
	int sumCube=0;

	for(int i=1; i<=numDigits(number); ++i){
		sumCube += exp(nthDigit(number, i), numDigits(number));
	}

	if(sumCube==number){
		return 1;
	} else {
		return 0;
	}
}


int main(){
	int n;

	cout << "Enter n = ";
	cin >> n;

	cout << "List of Armstrong numbers from 1 to " << n << ":" << endl;

	for(int i=1; i<=n; ++i){
		if(isArmstrong(i)){
			cout << i << endl;
		}
	}

	return 0;
}
