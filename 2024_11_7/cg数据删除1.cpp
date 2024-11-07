#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >>n;
	int i = 0,arr[100] = {0},ant[100] = {0};
	for(i = 0;i<n;i++)
	{
		cin >>arr[i];
	}
	int x = 0;
	cin >>x;
	int j = 0;
	for(i = 0;i<n;i++)
	{
		if(arr[i] != x)
			ant[j++] = arr[i];
	}
	for(i = 0;i<j;i++)
	{
		cout <<ant[i] <<" ";
	}
	cout <<endl;
	return 0;
}
