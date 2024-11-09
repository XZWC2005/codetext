#include <iostream>
using namespace std;
int main()
{
	int a = 0,n = 0,k = 0;
	cin >>a >>n >>k;
	int i = 0;
	char arr[27] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','R','S','T','U','V','W','X','Y','Z'};
	for(i = 1;i<k+1;i++)
		a /= n;
	int d = a%n;
	if(d > 9) cout <<arr[d-10] <<endl;
	else cout <<d <<endl;
	return 0;
}
