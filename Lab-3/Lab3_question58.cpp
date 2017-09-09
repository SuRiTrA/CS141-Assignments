#include<iostream>
using namespace std;

void onesComplement(char n[50]){
	char comp1[50];
	for(int i=0; i<50; ++i){
		comp1[i] = '\0';
	}

	for(int i=0; n[i]!='\0'; ++i){
		if(n[i] == 48){
			comp1[i] = 49;
		} else if(n[i] == 49){
			comp1[i] = 48;
		}
	}

	cout << comp1;
}

int main(){
	char n[50];

	cout << "Enter binary number: ";
	cin >> n;

	cout << "One's complement: ";
        onesComplement(n);
	cout << endl;	

	return 0;
}
