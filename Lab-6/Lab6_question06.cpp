#include<iostream>
using namespace std;

int main() {
	char str[20], *p;
	cout << "Enter a string of about ten characters." << endl;
	cin >> str;

	p=&(str[0]);

	int len=0;
	for (int i=0; *(p+i)!=0; ++i) {
		len = i;
	}

	for (int i=len; i>0; --i) {
		cout << p+i << endl;
	}

	return 0;
}
