#include<iostream>
using namespace std;

int main(){
	int amount, n2000, n500, n100, n50, n20, n10, n5, n2, n1;

	cout << "Enter the amount: ";
	cin >> amount;

	cout << endl;

	n2000 = amount/2000;
	n500 = (amount%2000)/500;
	n100 = ((amount%2000)%500)/100;
	n50 = (((amount%2000)%500)%100)/50;
	n20 = ((((amount%2000)%500)%100)%50)/20;
	n10 = (((((amount%2000)%500)%100)%50)%20)/10;
	n5 = ((((((amount%2000)%500)%100)%50)%20)%10)/5;
	n2 = (((((((amount%2000)%500)%100)%50)%20)%10)%5)/2;
	n1 = ((((((((amount%2000)%500)%100)%50)%20)%10)%5)%2)/1;

	cout << "Rs. " << amount << " can be expressed as: " << endl;

	if(n2000 > 0){
		cout << n2000 << " Rs. 2000 note(s)" << endl;
	}

	if(n500 > 0){
		cout << n500 << " Rs. 500 note(s)" << endl;
	}

	if(n100 > 0){
		cout << n100 << " Rs. 100 note(s)" << endl;
	}

	if(n50 > 0){
		cout << n50 << " Rs. 50 note(s)" << endl;
	}

	if(n20 > 0){
		cout << n20 << " Rs. 20 note(s)" << endl;
	}
	
	if(n10 > 0){
		cout << n10 << " Rs. 10 note(s)" << endl;
	}

	if(n5 > 0){
		cout << n5 << " Rs. 5 note(s)" << endl;
	}

	if(n2 > 0){
		cout << n2 << " Rs. 2 coin(s)" << endl;
	}

	if(n1 > 0){
		cout << n1 << " Re. 1 coin(s)" << endl;
	}
	
	cout << endl;

	return 0;
}
