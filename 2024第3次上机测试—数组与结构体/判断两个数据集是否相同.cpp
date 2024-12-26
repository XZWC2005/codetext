#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int a = 0,b = 0;
	cin >>a;
	vector<int> arr1(a);
	for(int i = 0;i < a;i++)
	{
		cin >>arr1[i];
	}
	cin >>b;
	vector<int> arr2(b);
	for(int i = 0;i < b;i++)
	{
		cin >>arr2[i];
	}
	sort(arr1.begin(),arr1.end());
	sort(arr2.begin(),arr2.end());
	if(a != b) cout <<"0"<<endl;
	else
	{
		bool flag = true;
		for(int k = 0;k < a;k++)
		{
			if(arr1[k] != arr2[k])
			{
				flag = false;
				break;
			}
		}
		if(flag) cout <<"1"<<endl;
		else
		{
			cout <<"0"<<endl;
		}
	}
	int i = 0,j = 1,count = 1;
	while(i < a)
	{
		count = 1;
		while(arr1[i] == arr1[j] && j < a)
		{
			j++;
			count++;
		}
		cout <<arr1[i] <<" "<<count <<endl;
		i = j;
		j++; 
	}
	return 0;
}
