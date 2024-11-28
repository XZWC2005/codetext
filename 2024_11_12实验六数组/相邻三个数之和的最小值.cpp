#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n = 0;
	cin >>n;
	vector<int>arr(n);
	for(int i = 0;i < n;i++)
	{
		cin >>arr[i];
	}
	int min = arr[0] + arr[1] + arr[2];
	int i = 0;
	for(i = 1;i < n - 2;i++)
	{
		if(min > arr[i] + arr[i + 1] + arr[i + 2])		
		{
			min = arr[i] + arr[i + 1] + arr[i + 2];
		}
	}
	if(min > arr[i] + arr[i + 1] + arr[0])
	{
		min = arr[i] + arr[i + 1] + arr[0];
	}
	if(min > arr[i + 1] + arr[0] + arr[1])
	{
		min = arr[i] + arr[0] + arr[1];
	}
	cout <<min <<endl;
	return 0;
}
