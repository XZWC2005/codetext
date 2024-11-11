#include <iostream>
using namespace std;

void inputData(int s[],int n)
{
	int i = 0;
	for(i = 0;i<n;i++)
	{
		cin >>s[i];
	}
}

void InsertSort(int *a,int n)
{
	int i = 0;
	for(i = 0;i<n;i++)
	{
		int end = i - 1,tmp = a[i];
		while(end >= 0)
		{
			if(tmp<a[end])
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}
}

void outputData(int s[],int n,int m)
{
	int i = 0;
	for(i = 0;i<n;i++)
	{
		cout <<s[i] <<" ";
		if((i + 1)%8 == 0)
			cout <<endl;
	}
}

int main()
{
	int n = 0;
	cin >>n;
	int arr[100] = {0};
	inputData(arr,n);
	InsertSort(arr,n);
	outputData(arr,n,8);
	return 0;
}
