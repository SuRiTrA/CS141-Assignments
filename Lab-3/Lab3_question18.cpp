#include<iostream>
using namespace std;

int main(){
	float CP, SP, PL;

	cout << "Enter the cost price: " << endl;
	cin >> CP;

	cout << "Enter the selling price: " << endl;
	cin >> SP;

	PL = SP-CP;

	if(PL<0){
		cout << "LOSS: " << -PL << endl;
	} else if (PL==0){
		cout << "NO PROFIT, NO LOSS." << endl;
	} else if (PL>0){
		cout << "PROFIT: " << PL << endl;
	}

	return 0;
}
