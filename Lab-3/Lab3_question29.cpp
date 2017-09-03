#include<iostream>
using namespace std;

int main(){
	int n, i=1, Sn=0;

	cout << "Enter n = ";
	cin >> n;

	while(i<=n){
		Sn += i;
		i += 2;
	}

	cout << "Sum = " << Sn << endl;

	return 0;
}
