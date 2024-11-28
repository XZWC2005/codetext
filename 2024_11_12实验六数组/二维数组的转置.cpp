#include <iostream>
using namespace std;
int main()
{
	int n = 0,m = 0;
	cin >>n >>m;
	int arr[10][10] = {0},brr[10][10] = {0};
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < m;j++)
		{
			cin >>arr[i][j];
			brr[j][i] = arr[i][j];
		}
	}
	for(int i = 0;i < m;i++)
	{
		for(int j = 0;j < n;j++)
		{
			cout <<brr[i][j] <<" ";
		}
		cout <<endl;
	}
	return 0;
}
