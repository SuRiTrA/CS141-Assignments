#include<iostream>
using namespace std;

int main(){
	int i0=0, i1=1, i2=1;
	int n=0;

	cout << "Enter n = ";
	cin >> n;

	for(int i=0; i<n; ++i){
		cout << i2 << endl;
		
		i2 = i0 + i1;
		i0 = i1;
		i1 = i2;
	}

	return 0;
}
