#include<iostream>
using namespace std;

int main(){
	char a;

	cout << "Enter a character: ";
	cin >> a;

	if ((a>=48) && (a<=57)){
		cout << "The character is a digit." << endl;
	} else if (((a>=65) && (a<=90)) || (a>=97) && (a<=122)){
		cout << "The character is an alphabet." << endl;
	} else {
		cout << "The character is special character." << endl;
	}
	
	return 0;
}
