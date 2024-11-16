#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int length(long long a)
{
	int count = 0;
	while(a>0)
	{
		count++;
		a /= 10;
	}
	return count;
}

int main()
{
	int n = 0;
	cin >>n;
	int i = 0;
	vector<long long> arr(n);
	for(i = 0;i<n;i++)
	{
		cin >>arr[i];
	}
	bool flag = false;
	do
	{
		flag = false;
		for(i = 0;i < n - 1;i++)
		{
			if(arr[i]<arr[i+1])
			{
				swap(arr[i],arr[i+1]);
				flag = true;
			}
		}
	}while(flag);
	int maxDigits = length(arr[0]);
	for(i = n - 1;i >= 0;i--)
	{
		cout <<setw(maxDigits) <<setfill(' ') <<right <<arr[i]<<endl;
	}
	return 0;
}
