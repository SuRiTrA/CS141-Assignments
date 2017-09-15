#include<iostream>
using namespace std;

bool isEven(int a){
	return ((a%2) == 0);
}

int main(){
	int number;
	cout << "Enter number: ";
	cin >> number;

	if(isEven(number)){
		cout << "The number is even." << endl;
	} else {
		cout << "The number is odd." << endl;
	}

	return 0;
}
