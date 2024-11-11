#include <iostream>
using namespace std;

char *left(char *s,int n)
{
	int i = 0;
	for(i = 0;i<n;i++)
	{
		cout <<s[i];
	}
	cout <<endl;
}

int main()
{
	char s[100] = {'\0'};
	cin >>s;
	int n = 0,a = sizeof(s)/sizeof(s[0]);
	cin >>n;
	int i = 0;
	for(i = 0;i<a;i++)
	{
		cout <<s[i];
	}
	cout <<endl;
	if(n>=a)
	{
		for(i = 0;i<a;i++)
		{
			cout <<s[i];
		}
		cout <<endl;
	}
	else left(s,n);
	return 0;
}
