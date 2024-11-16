#include <iostream>
using namespace std;

int convert(int n,int m)
{
	int sum = 0;
	while(n>0)
	{
		sum += n%m;
		n /= m;
	}
	return sum;
}

int main()
{
	int n = 0,m = 0;
	cin >>n >>m;
	cout <<convert(n,m) <<endl;
	return 0;
} 
