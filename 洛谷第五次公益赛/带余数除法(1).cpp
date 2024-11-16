#include <iostream>
using namespace std;
int main()
{
	int T = 0,n = 0,k = 0,i = 0,arr[20] = {0};
	cin >>T;
	for(i = 0;i < T;i++)
	{
    	cin >>n >>k;
    	if(k == 0) arr[i] = 1;
    	else
		{
    	arr[i] = n/k - n/(k + 1);
        }
    }
	for(i = 0;i < T;i++)
	{
    	cout <<arr[i] <<endl;
	}
	return 0;
}
