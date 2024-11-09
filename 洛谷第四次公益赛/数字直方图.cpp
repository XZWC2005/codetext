#include <iostream>
using namespace std;
int main()
{
	int n = 0,b = 0,x[100] =  {0},arr[10] = {0};
	cin >>n;
	int i = 0;
	for(i = 0;i<n;i++)
	{
		cin >>x[i];
	}
	for(i = 0;i<n;i++)
	{
		while(x[i]>0)
		{
			arr[x[i]%10]++;
			x[i] /= 10;
		}
	}
	int j = 0,t = 0;
	while(j<9)
	{
		if(arr[j+1]>t)
			t = arr[j+1];
		j++;		
	}
	for(i = 0;i<t;i++)
	{
		for(j = 0;j<10;j++)
		{
			if(arr[j]+i>=t)
			{
				cout <<"- ";
			}
			else cout <<"  ";	
		}
		cout <<endl;
	}
	cout <<"0 1 2 3 4 5 6 7 8 9"<<endl;
	return 0;
}
