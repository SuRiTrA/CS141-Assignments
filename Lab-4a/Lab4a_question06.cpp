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
		if(number == 1){
			return 0;
		} else if(number == 2){
			return 1;
		} else if(number%i == 0){
			return 0;
		}
		
		--i;
	}
}

int main(){
	int start, end;

	cout << "Enter the starting number: ";
	cin >> start;

	cout << "Enter the ending number: ";
	cin >> end;

	cout << "List of primes between " << start << " and " << end << ":" << endl;

	for(int i=start; i<=end; ++i){
		if(isPrime(i)){
			cout << i << endl;
		}
	}

	return 0;
}
