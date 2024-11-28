#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main()
{
	int n = 0;
	cin >>n;
	vector<int>arr(n);
	for(int i = 0;i < n;i++)
	{
		cin >>arr[i];
	}
	int min = arr[0],max = arr[0],sum = arr[0];
	for(int i = 1;i < n;i++)
	{
		if(arr[i] > max) max = arr[i];
		if(arr[i] < min) min = arr[i];
		sum += arr[i];
	}
	double average = sum*1.0/n;
	cout <<max <<" "<<min <<" "<<fixed <<setprecision(2) <<average <<endl;
	return 0; 
}
