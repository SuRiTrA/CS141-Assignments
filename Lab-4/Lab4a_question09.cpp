#include<iostream>
using namespace std;

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
	int start, end;
	cout << "Enter starting number: ";
	cin >> start;

	cout << "Enter ending number: ";
	cin >> end;

	cout << "List of perfect numbers between " << start << " and " << end << ":" << endl;

	for (int i=start; i<=end; ++i){
		if(isPerfect(i)){
			cout << i << endl;
		}
	}

	return 0;
}
