#include<iostream>
using namespace std;

int main(){
	int n, Sn=0;

	cout << "Enter n = ";
	cin >> n;
	
	while(n>0){
		Sn += n;
		--n;
	}
	
	cout << "Sum = " << Sn << endl;
	
	return 0;
}
