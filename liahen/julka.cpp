//2014-01-01 16:24:19
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int compute (int val1, int val2, int sign)
{
	switch (sign)
	{
		case '+': return val1+val2;
		case '-': return val1-val2;
		case '*': return val1*val2;
		case '/': return val1/val2;
	}	
}

int main () {
	string str;		
	vector<int>vyraz;	
	int lava_z=0,val1=0,val2=0,it=0;
	while (cin >> str)
	{
		for(unsigned int i=0; i<str.length(); ++i)
		{
			if (str[i]>='0' && str[i]<='9') { vyraz.push_back(str[i]-'0'); }
			else if (str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/') { vyraz.push_back(str[i]); }
			else if (str[i]==')') { it=vyraz.size(); vyraz.push_back(compute(vyraz[it-3], vyraz[it-1],vyraz[it-2])); vyraz.erase(vyraz.begin()+it-3,vyraz.begin()+it); }	
		}
		cout << vyraz[0] << endl;
		vyraz.clear();
	}
	return 0;
}
