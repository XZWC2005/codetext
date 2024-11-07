#include <iostream>
using namespace std;

void inverse(int x[],int n)
{
	int i = 0,temp = 0;
	for(i = 0;i<n/2;i++)
	{
		temp = x[i];
		x[i] = x[n-i-1];
		x[n-i-1] = temp;
	}
}

int main()
{
	int n = 0;
	cin >>n;
	int i = 0,arr[100] = {0};
	for(i = 0;i<n;i++)
	{
		cin >>arr[i];
	}
	inverse(arr,n);
	for(i = 0;i<n;i++)
	{
		cout <<arr[i] <<" ";
		if((i+1)%4 == 0)
			cout <<endl;
	}
	return 0;
}
