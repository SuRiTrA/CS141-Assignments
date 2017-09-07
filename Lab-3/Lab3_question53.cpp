#include<iostream>
using namespace std;

bool isFactor(int number, int factor){
	if(number%factor == 0){
		return 1;
	} else {
		return 0;
	}
}

bool isPerfect(int number){
	int sumFactors=0;
	for(int i=1; i<number; ++i){
		if(isFactor(number, i)){
			sumFactors += i;
		}
	}

	return (sumFactors==number);
}

int main(){
	int num;

	cout << "Enter a number: ";
	cin >> num;

	if(isPerfect(num)){
		cout << num << " is a perfect number." << endl;
	} else {
		cout << num << " is not a perfect number." << endl;
	}

	return 0;
}
