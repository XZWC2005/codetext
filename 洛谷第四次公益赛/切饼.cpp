#include <iostream>
using namespace std;

int cutcake(int a)
{
	if(a == 1)
		return 2;
	else return cutcake(a-1) + a/2 + 1;
}

int main()
{
	int n = 0;
	cin >>n;
	cout <<cutcake(n) <<endl;
	return 0;
}
