#include <iostream>
using namespace std;
int main()
{
	int m = 0,n = 0;
	cin >>m >>n;
	int fib1 = 1,fib2 = 1,fib3 = 0,i = 0;
	for(i = 1;i<=n;i++)
	{
		if(i == 1 || i == 2) cout <<fib1 <<" ";
		else
		{
			fib3 = fib1 + fib2;
			cout <<fib3 <<" ";
			fib1 = fib2;
			fib2 = fib3;
		}
		if(i%m == 0) cout <<endl;
	}
	return 0;
} 

