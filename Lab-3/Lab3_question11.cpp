#include<iostream>
using namespace std;

int main(){
	int i;

	cout << "Enter day number: ";
	cin >> i;

	if(i==1){
		cout << "Day: Monday" << endl;
	} else if(i==2){
		cout << "Day: Tuesday" << endl;
	} else if(i==3){
		cout << "Day: Wednesday" << endl;
	} else if(i==4){
		cout << "Day: Thursday" << endl;
	} else if(i==5){
		cout << "Day: Friday" << endl;
	} else if(i==6){
		cout << "Day: Saturday" << endl;
	} else if(i==7){
		cout << "Day: Sunday" << endl;
	}

	return 0;
}
