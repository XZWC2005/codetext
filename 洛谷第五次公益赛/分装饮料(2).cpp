#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
	int m = 0,n = 0;
	cin >>m >>n;
	vector<int>arr(n);
	int i = 0;
	for(i = 0;i<n;i++)
	{
		cin >>arr[i];
	}
	sort(arr.begin(), arr.end());
	set<vector<int> > unique_solutions;
	for (i = 0;i < n - 2;i++)
	{
        for (int j = i + 1;j < n - 1;j++)
		{
            for (int k = j + 1;k < n;k++)
			{
                if (arr[i] + arr[j] + arr[k] == m)
				{
                    unique_solutions.insert({arr[i], arr[j], arr[k]});
                }
            }
        }
    }
	cout << unique_solutions.size() << endl;
	return 0;
}
