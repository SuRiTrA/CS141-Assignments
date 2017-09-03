#include<iostream>
using namespace std;

int main(){
	float s1, s2, s3;

	cout << "Enter the lengths of the sides of the triangle:" << endl;
	cin >> s1 >> s2 >> s3;

	if ((s1==s2) && (s2==s3)){
		cout << "The triangle is equilateral." << endl;
	} else if ((s1==s2) || (s2==s3) || (s3==s1)){
		cout << "The triangle is isosceles." << endl;
	} else {
		cout << "The triangle is scalane." << endl;
	}

	return 0;
}
