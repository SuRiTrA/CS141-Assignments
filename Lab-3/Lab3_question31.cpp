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

int main(){
	int n;

	cout << "Enter n = ";
	cin >> n;

	cout << "Number of digits in " << n << " is " << numDigits(n) << "." << endl;

	return 0;
}
