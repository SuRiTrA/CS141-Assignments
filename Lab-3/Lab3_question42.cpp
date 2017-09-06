#include<iostream>
using namespace std;

int main(){
	int base, exponent, ans=1;

	cout << "Base = ";
	cin >> base;

	cout << "Exponent = ";
	cin >> exponent;

	for(; exponent>0; --exponent){
		ans *= base;
	}

	cout << "Result: " << ans << endl;

	return 0;
}
