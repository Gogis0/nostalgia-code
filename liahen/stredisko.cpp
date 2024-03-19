//2013-12-29 14:33:52
#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;


struct lol {
	int poradie;
    int stav;
    int cislo;
};

bool operator< (const lol &left, const lol &right) {
	if (left.stav<right.stav) return true;
	if ((left.stav==right.stav) && left.poradie>right.poradie) return true;
	return false;
}

int main () {
	char str[15];		
	lol pacient;
	int count=0;
	priority_queue<lol> q;
	while(1)
	{
		scanf ("%s",str);
		if (!strcmp(str,"pacient")) 
		{
			scanf("%d%d", &pacient.cislo, &pacient.stav); pacient.poradie=count++;			
			q.push(pacient);
		}
		if (!strcmp(str,"dalsi"))
		{
			if (!q.empty())
			{
				printf("%d\n", q.top().cislo); q.pop();
			}
			else printf("-1\n");
		}
		if (!strcmp(str,"koniec")) return 0;
	}
}
