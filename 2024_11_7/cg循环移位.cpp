#include <iostream>
using namespace std;

void convert(int x[],int n)
{
	int tmp = x[n-1];
	int i = 0;
	for(i = n-1;i>0;i--)
	{
		x[i] = x[i-1];
	}
	x[0] = tmp;
}

int main()
{
	int n = 0,arr[100] = {0};
	cin >>n;
	int i = 0;
	for(i = 0;i<n;i++)
	{
		arr[i] = i;
	}
	for(i = 0;i<n;i++)
	{
		cout <<arr[i] <<" ";
	}
	cout <<endl;
	for(i = 1;i<n;i++)
	{
		convert(arr,n);
		int j = 0;
		for(j = 0;j<n;j++)
		{
			cout <<arr[j] <<" ";
		}
		cout <<endl;
	}
	return 0;
}
