#include <iostream>
using namespace std;

void convert(int a,int b)
{
	int arr[20] = {0},count = 0,i = 0;
	while(a > 0)
	{
		arr[i] = a%b;
		a /= b;
		count++;
	}
	for(i = 0;i<count;i++)
	{
		if(arr[i] == 10) cout <<"A";
		else if(arr[i] == 11) cout <<"B";
		else if(arr[i] == 12) cout <<"C";
		else if(arr[i] == 13) cout <<"D";
		else if(arr[i] == 14) cout <<"E";
		else if(arr[i] == 15) cout <<"F";
		else cout <<arr[i];
	}
	cout <<endl;
}

int main()
{
	int n = 0,m = 0;
	cin >>n >>m;
	convert(n,m);
	return 0;
} 
