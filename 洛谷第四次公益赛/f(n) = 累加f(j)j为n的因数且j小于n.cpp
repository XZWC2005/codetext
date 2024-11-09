#include <iostream>
#include <cmath>
using namespace std;

int f(int a)
{
	int b = 0,s = 0;
	if(a == 1)
		return 1;
	else
	{
		int i = 0;
		for(i = 1;i<a;i++)
		{
			if(0 == a%i)
			{
				s += f(i);
			}
		}
	}
	return s;
}

int main()
{
	int n = 0;
	cin >>n;
	cout <<f(n) <<endl;
	return 0;
}
