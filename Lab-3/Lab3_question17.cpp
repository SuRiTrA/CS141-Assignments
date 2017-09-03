#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float a, b, c;

	cout << "Enter the coefficients of the equation: " << endl;
	
	cout << "a = ";
	cin >> a;
	
	cout << "b = ";
	cin >> b;

	cout << "c = ";
	cin >> c;

	float D = (pow(b,2) - 4*a*c);

	if(D>=0){
		float x1 = (-b + sqrt(D))/(2*a);
		float x2 = (-b - sqrt(D))/(2*a);
		
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	} else {
		float xReal = -b/(2*a);
		float xImaginary = (sqrt(-D)/(2*a));

		cout << "x1 = " << xReal << " + " << xImaginary << "i" << endl;
		cout << "x2 = " << xReal << " - " << xImaginary << "i" << endl;
	}

	return 0;
}
