#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >>n;
	int i = 0;
	for(i = 1;i<n;i++)
	{
		cout <<" ";
	}
	cout <<"*"<<endl;
	for(i = 2;i<=n;i++)
	{
		int j = 0;
		for(j = 1;j<=n-i;j++)
		{
			cout <<" "; 
		}
		cout <<"*";
		for(j = 1;j<=2*i-3;j++)
		{
			cout <<" "; 
		}
		cout <<"*"<<endl;
	}
	for(i = n-1;i>1;i--)
	{
		int j = 0;
		for(j = 1;j<=n-i;j++)
		{
			cout <<" "; 
		}
		cout <<"*";
		for(j = 1;j<=2*i-3;j++)
		{
			cout <<" "; 
		}
		cout <<"*"<<endl;
	}
	if(n  == 1) return 0;
	else
	{
		for(i = 1;i<n;i++)
	{
		cout <<" ";
	}
	cout <<"*"<<endl;
	return 0;
	}	
}

