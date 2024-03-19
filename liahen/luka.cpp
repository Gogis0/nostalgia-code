//2013-12-22 10:55:47
#include<iostream>
using namespace std;

int main () {
	int n,ax,ay,bx,by,cx,cy;
	double res;
	cin >> n;
	for (int i=0; i<n; ++i)
	{
		cin >> ax >> ay >> bx >> by >> cx >> cy;
		res = ((bx - ax)*(cy - ay) - (by - ay)*(cx - ax));
		if (res==0)	cout << "rovno" << endl;
		else if (res<0) cout << "vpravo" << endl;
		else cout << "vlavo" << endl;
	}
}
