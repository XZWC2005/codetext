#include <iostream>
using namespace std;
int main()
{
	int arr[10] = {0};
	for(int i = 0;i < 10;i++)
	{
		cin >>arr[i];
	}
	for(int i = 0;i < 10;i = i + 2)
	{
		int temp = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = temp;
	}
	for(int i = 0;i < 10;i++)
	{
		cout <<arr[i] <<" ";
	}
	cout <<endl;
	return 0;
}
