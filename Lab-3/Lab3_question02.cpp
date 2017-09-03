#include<iostream>
using namespace std;

int main(){
	float firstN, secondN, thirdN;

	cout << "Enter three numbers: " << endl;
	cin >> firstN >> secondN >> thirdN;

	if((firstN > secondN) && (firstN > thirdN)){
		cout << firstN << " is the largest number." << endl;
	} else if ((secondN > firstN) && (secondN > thirdN)){
		cout << secondN << " is the largest number." << endl;
	} else if ((thirdN > firstN) && (thirdN > secondN)){
		cout << thirdN << " is the largest number." << endl;
	} else if ((firstN == secondN) && (firstN > thirdN)){
		cout << firstN << " is the largest number." << endl;
	} else if ((firstN == secondN) && (firstN < thirdN)){
		cout << thirdN << " is the largest number." << endl;
	} else if ((firstN == thirdN) && (firstN > secondN)){
		cout << firstN << " is the largest number." << endl;
	} else if ((firstN == thirdN) && (firstN < secondN)){
		cout << secondN << " is the largest number." << endl;
	} else if ((secondN == thirdN) && (secondN > firstN)){
		cout << secondN << " is the largest number." << endl;
	} else if ((secondN == thirdN) && (secondN < firstN)){
		cout << firstN << " is the largest number." << endl;
	}

	return 0;
}
