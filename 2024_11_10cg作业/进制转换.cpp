#include <iostream>
using namespace std;
int main()
{
	int a = 0,b = 0;
	cin >>a >>b;
	int arr[100] = {0},count = 0;
	char brr[6] = {'A','B','C','D','E','F'};
	int i = 0;
	for(i = 0;i<100;i++)
	{
		arr[i] = a%b;
		a /= b;
		count++;
		if(a == 0)
			break;
	}
	for(i = count - 1;i >= 0;i--)
	{
		if(arr[i]>9) cout <<brr[arr[i]-10];
		else cout <<arr[i];
	}
	cout <<endl;
	return 0;
}
