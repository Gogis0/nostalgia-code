//2013-12-19 20:33:52
#include<iostream>

using namespace std;

int a,b=0;

int main () {
	while(cin >> a)
	{
		if (a>b) b=a;
	}
	cout << b << endl;
	return 0;
}
