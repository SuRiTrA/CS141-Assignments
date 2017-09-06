#include<iostream>
using namespace std;

int sqrt(float num){
	float sqrt=0.00001;	// can only calculate square roots for num > 0.00001
	for(int i=1000; i>=0; --i){
		sqrt = (sqrt + num/sqrt)/2;
	}

	int foo = int(sqrt);

	return foo+1;
}

bool isPrime(int number){
	int i = sqrt(number);

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

int main(){
	int num;

	cout << "Enter a number: ";
	cin >> num;

	if(isPrime(num)){
		cout << num << " is prime." << endl;
	} else {
		cout << num << " is not prime." << endl;
	}
	
	return 0;
}
