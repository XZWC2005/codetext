#include <iostream>
using namespace std;
int main()
{
	int a = 0,n = 0,k = 0;
	cin >>a >>n >>k;
	int i = 0;
	for(i = 1;i<k+1;i++)
	{
		a /= n;
	}
	cout <<a%n <<endl;
	return 0;
}
