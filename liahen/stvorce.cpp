//2013-12-20 23:32:16
#include <iostream>
using namespace std;

template<class T> T sumSquares(T a, T b) { return a*a + b*b; }

int main() {
	int a,b;
	double c,d;
	cin >> a >> b >> c >> d;
	cout << sumSquares(a,b) << endl << int(sumSquares(c,d)) << endl;
	return 0;
}
