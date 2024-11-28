#include <iostream>
using namespace std;
int main()
{
	char a[100] = {'\0'};
	cin >>a;
	int i = 0,j = 0;
	while(a[j] != '\0') j++;
	j--;
	bool flag = true;
	while(i < j)
	{
		if(a[i] != a[j])
		{
			flag = false;
			break;
		}
		i++;
		j--; 
	}
	if(flag)
	{
		cout <<a <<" is a palindrome!"<<endl;
	}
	else
	{
		cout <<a <<" is not a palindrome!"<<endl;
	}
	return 0;
}
