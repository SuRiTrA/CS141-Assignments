#include<iostream>
using namespace std;

int main(){
	float s1, s2, s3;

	cout << "Enter the lengths of the three sides of the triangle: " << endl;
	cin >> s1 >> s2 >> s3;

	if((s1+s2>s3) || (s1+s3>s2) || (s2+s3>s1)){
		cout << "The triangle is valid." << endl;
	} else {
		cout << "The triangle is invalid." << endl;
	}

	return 0;
}
