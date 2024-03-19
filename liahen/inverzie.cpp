//2014-05-05 18:19:23
#include <cstdio>
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <queue>
#include <stack>
#include <algorithm>
#include <cmath>
#include <iomanip>
#define uint unsigned int
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
using namespace std;

unsigned long long ans=0ULL;

inline void merge (int* input, int p, int r) {
	int mid = floor((p + r) / 2);
    	int i1 = 0;
        int i2 = p;
    	int i3 = mid + 1;

        int temp[r-p+1];

   	while ( i2 <= mid && i3 <= r )
		if ( input[i2] < input[i3] )  
			  temp[i1++] = input[i2++];		  
	        
		else	{
			temp[i1++] = input[i3++];
			 ans+=mid-i2+1;}

    	while ( i2 <= mid )
       		temp[i1++] = input[i2++];

     	while ( i3 <= r )
        	temp[i1++] = input[i3++];
    
	for ( int i = p; i <= r; i++ )
        	input[i] = temp[i-p];
}

inline void merge_sort(int* input, int p, int r) {
    if (p<r) {
        int mid = floor((p + r) / 2);
        merge_sort(input, p, mid);
        merge_sort(input, mid + 1, r);
        merge(input, p, r);}    
}

int main() {
	cin.sync_with_stdio(0);
	int x,n=0,arr[200047];
	while (cin >> x) {
	if (x) arr[n++]=x;
	else {
		merge_sort(arr, 0, n-1); 	 	
		cout << ans << '\n';
		ans=0ULL; n=0;}
	}				 
	return 0;}
