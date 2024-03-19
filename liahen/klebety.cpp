//2013-12-23 21:54:36
#include<iostream>
#include<string>
#include<queue>
using namespace std;

typedef struct str {
	string name;
	int lol,check,friends[100];	
} human;

inline int index (string name, human *arr, int n)
{
	int i;
	for (i=0; i<n; ++i)	
		if (!name.compare(arr[i].name)) break;
	return i;
}

int main() {
	human arr[100];
	string name1, name2;
	int n,m,x,temp=0,first,inf=1,second;
	queue<int> q;	
	
	cin >> n;
	for (int i=0; i<n; ++i)
	{
		cin >> arr[i].name;
		arr[i].lol=0; 
		arr[i].check=0; 
	}
	cin >> m;
	for (int i=0; i<m; ++i)
	{
		cin >> name1 >> name2;
		first = index (name1, arr, n);
		second = index (name2, arr, n);
				
		arr[first].friends[arr[first].lol++] = second;
		arr[second].friends[arr[second].lol++] = first;
		
		if (temp==0) temp = second;
	}
	q.push(temp);

	while(!q.empty())
	{
		x = q.front();
		q.pop();
		if (!arr[x].check) for (int i=0; i<arr[x].lol; ++i) q.push(arr[x].friends[i]);
		arr[x].check=1;
	}
	for (int i=0; i<n && inf; ++i)	inf=arr[i].check;
	if(inf)		cout << "ANO" << endl;
	else		cout << "NIE" << endl;

    return 0;
} 
