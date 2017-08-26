#include<iostream>
using namespace std;

int main(){
	float P, T, R, SI, A;

	cout << "Enter the principal amount: ";
	cin >> P;

	cout << "Enter the interest rate: ";
	cin >> R;

	cout << "Enter the time (in years): ";
	cin >> T;

	SI = (P*T*R)/100;
	A = P + SI;

	cout << "The simple interest is " << SI << " and the amount is " << A << " after " << T << " years." << endl;
	
	return 0;
}
