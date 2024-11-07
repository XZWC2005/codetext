#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >>n;
	cout <<n <<"=";
	if(n == 1)
	{
		cout <<1 <<endl;
		return 0;
	}
	int i = 0;
	for(i = 2;i<=n;i++)
		{
			if(0 == n%i)
			{
				cout <<i;
				n /= i;
				break;
			}
		}
	while(n>1)
	{
		for(i = 2;i<=n;i++)
		{
			if(0 == n%i)
			{
				cout <<"*"<<i;
				n /= i;
				break;
			}
		}
	}
	cout <<endl;
	return 0;
} 
