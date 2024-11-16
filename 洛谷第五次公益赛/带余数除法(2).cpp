#include <iostream>
using namespace std;

int main()
{
	int t = 0,n = 0,k = 0,i = 0;
	long long arr[20]={0};
	cin>>t;
	for(i = 0;i < t;i++)
	{
    	cin >>n >>k;
    	if(k == 0) arr[i] = n;
    	else
		{
			int a = n - (n/k)*k;
			int b = (n/k - n/(k + 1));
     		arr[i] = (a + (b - 1)*k*0.5)*b;
        }
    }
	for(i = 0;i < t;i++)
	{
    	cout <<arr[i] <<endl;
	}
	return 0;
}
