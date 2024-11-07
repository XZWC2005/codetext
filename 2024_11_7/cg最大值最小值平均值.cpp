#include <iostream>
#include <iomanip>
using namespace std;

double maxData(double x[],int n)
{
	double max = x[0];
	int i = 0;
	for(i = 1;i<n;i++)
	{
		if(x[i] > max)
			max = x[i];
	}
	return max;
}

double minData(double x[],int n)
{
	double min = x[0];
	int i = 0;
	for(i = 1;i<n;i++)
	{
		if(x[i] < min)
			min = x[i];
	}
	return min;
}

double avgData(double x[],int n)
{
	double sum = x[0];
	int i = 0;
	for(i = 1;i<n;i++)
	{
		sum += x[i];
	}
	return sum/n;
}

int main()
{
	int n = 0;
	cin >>n;
	int i = 0;
	double arr[100] = {0};
	for(i = 0;i<n;i++)
	{
		cin >>arr[i];
	}
	double max = maxData(arr,n);
	double min = minData(arr,n);
	double avg = avgData(arr,n);
	cout <<fixed <<setprecision(4) <<"max="<<max <<endl;
	cout <<fixed <<setprecision(4) <<"min="<<min <<endl;
	cout <<fixed <<setprecision(4) <<"avg="<<avg <<endl;
	return 0;
}
