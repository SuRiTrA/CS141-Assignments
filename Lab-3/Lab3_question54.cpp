#include<iostream>
using namespace std;

bool isFactor(int number, int fact){
	if(number%fact == 0){
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
	int n;

	cout << "Enter n = ";
	cin >> n;

	for(int i=0; i<=n; ++i){
		if(isPerfect(i)){
			cout << i << endl;
		}
	}

	return 0;
}
