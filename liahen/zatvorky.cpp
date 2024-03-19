//2013-12-24 12:34:02
#include<iostream>
#include<stack>
#include<string>
using namespace std;

void clear(stack<char> &q )
{
   stack<char> empty;
   swap(q,empty);
}

int main () {
	int n;
	char temp=0;
	string str;
	stack<char> stack;
	cin >> n;
	while(n--)
	{
		cin >> str;
		for (unsigned int i=0; i<str.size(); ++i)
		{
			if (str[i]==')'|| str[i]==']' || str[i]=='}')
			{
				if (stack.empty()) { stack.push(str[i]); break; goto label; }
				if (temp==str[i])
				{
					stack.pop();
					if (!stack.empty())
					{
						if (stack.top()=='(') temp=')';
						if (stack.top()=='[') temp=']';
						if (stack.top()=='{') temp='}';
					}
					else temp=0;
				}
				else break;				
			}
			else
			{
				stack.push(str[i]);
				if (str[i]=='(') temp=')';
				if (str[i]=='[') temp=']';
				if (str[i]=='{') temp='}';
			}
		}
		label:
		if (stack.empty()) cout << "ANO" << endl;
		else cout << "NIE" << endl;
		clear(stack);
	}
	return 0;
}
