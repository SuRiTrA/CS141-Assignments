#include<iostream>
using namespace std;

int main(){
	char a;

	cout << "Enter an alphabet: ";
	cin >> a;

	if((a=='a') || (a=='e') || (a=='i') || (a=='o') || (a=='u') || (a=='A') || (a=='E') || (a=='I') || (a=='O') || (a=='U')){
		cout << "The alphabet is a vowel." << endl;
	}else {
		cout << "The alphabet is a consonant." << endl;
	}

	return 0;
}
