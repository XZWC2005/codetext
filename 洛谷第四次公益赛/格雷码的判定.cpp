#include <iostream>
using namespace std;

int isGraycode(int a,int b)
{
	int t = 0,count = 0;
	for(t = 0;t<=4;t++)
	{
		if(a%10 != b%10)
			count++;
			a /=10,b /=10;
	}
	if(count >= 2) return 1;
	else return 0;
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
	for(i = 0;i<n-1;i++)
	{	int a = arr[i],b = arr[i+1];
		if(isGraycode(a,b))
		{
			cout <<"no" <<endl;
			return 0;
		}
	}
	int a = arr[0],b = arr[n-1];
	if(isGraycode(a,b))
		cout <<"no"<<endl;
	else cout <<"yes" <<endl;
	return 0;
}
