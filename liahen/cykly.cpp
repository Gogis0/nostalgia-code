//2013-12-21 17:53:44
#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n,j=0,a[12345];
	cin >>n;
	if (n==0) 
	{		
		for (int i=0; i<12345; ++i)
		{
			cin >> a[j];
			if (a[j++]==0) break;
		}
		for (int i=0; i<j-1; ++i) cout << a[i] << endl;
	}
	else 
	{
	for (int i=0; i<n; ++i)	cin >> a[i]; 
	for (int i=0; i<n; ++i)	cout << a[i] << endl;
	}
  return 0;
}
