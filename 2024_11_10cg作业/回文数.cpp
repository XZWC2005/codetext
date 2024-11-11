#include <iostream>
using namespace std;

int convert(int a,int b)
{
	int arr[100] = {0},i = 0,count = 0;
	while(a>0)
	{
		arr[i++] = a % b;
		a /= b;
		count++;
	}
	for(i = 0;i<=count/2;i++)
	{
		if(arr[i] != arr[count - i - 1])
			return 0;
	}
	return 1;
}

int main()
{
	int i = 11;
	while(1)
	{
		if(convert(i,2) && convert(i,8) && convert(i,10))
		{
			cout <<i <<endl;
			break;
		}
		else i++;
	}
	return 0;
}
