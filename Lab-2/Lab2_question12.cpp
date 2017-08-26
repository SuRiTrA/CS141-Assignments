#include<iostream>
using namespace std;

float exp(float base, int pow){
	float ans=1;

	while(pow>0){
		ans=ans*base;
		--pow;
	}

	return ans;
}

int main(){
	float P, T, R, CI, A;

	cout << "Enter the principle amount: ";
	cin >> P;

	cout << "Enter the interest rate: ";
	cin >> R;

	cout << "Enter the time (in years): ";
	cin >> T;

	A = P*exp((1+(R/100)), T);
	CI = A - P;

	cout << "The compound interest is " << CI << " and the amount is " << A << " after " << T << " years." << endl;
	
	return 0;
}
