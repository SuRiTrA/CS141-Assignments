#include<iostream>
using namespace std;

int main() {
	char str[20], *p;
	cout << "Enter about ten characters of string." << endl;
	cin >> str;

	p=&(str[0]);
	
	for (int i=0; i<20 && *(p+i)!='\0'; ++i) {
		cout << p+i << endl;
	}

	return 0;
}
