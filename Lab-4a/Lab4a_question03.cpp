#include<iostream>
using namespace std;

float max(float num1, float num2){
	float maxNum=0;
	if(num1 >= num2){
		maxNum = num1;
	} else {
		maxNum = num2;
	}

	return maxNum;
}

int main(){
	float a, b;

	cout << "Enter two numbers: " << endl;
	cin >> a >> b;

	cout << "The maximum number is: " << max(a, b) << endl;

	return 0;
}
