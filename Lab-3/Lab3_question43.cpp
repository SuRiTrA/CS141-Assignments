#include<iostream>
using namespace std;

bool isFactor(int number, int fact){
	if(number%fact == 0){
		return 1;
	} else {
		return 0;
	}
}

int main(){
	int n;

	cout << "Enter number: " << endl;
	cin >> n;

	cout << "Factors of " << n << " are: " << endl;

	for(int i=1; i<=n; ++i){
		if(isFactor(n, i)){
			cout << i << endl;
		}
	}

	return 0;
}
