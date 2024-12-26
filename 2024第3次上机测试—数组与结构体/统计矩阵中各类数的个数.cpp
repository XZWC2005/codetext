#include <iostream>
using namespace std;
int main()
{
	int arr[4][4] = {0},a1 = 0,a2 = 0,a3 = 0;
	for(int i = 0;i < 4;i++)
	{
		for(int j = 0;j < 4;j++)
		{
			cin >>arr[i][j];
			if(arr[i][j] > 0) a1++;
			else if(arr[i][j] == 0) a2++;
			else a3++;
		}
	}
	cout <<a1 <<" "<<a3 <<" "<<a2 <<endl;
	return 0;
}
