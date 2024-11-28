#include <iostream>
using namespace std;

bool isDigit(char c)
{
	return c >= '0' && c <= '9';
}

int main()
{
	char arr[101] = {'\0'};
	cin >>arr;
	for(int i = 0;i < 100 && arr[i] != '\0';i++)
	{
		while(!isDigit(arr[i]) && i < 100 && arr[i] != '\0') i++;
		while(isDigit(arr[i]) && i < 100 && arr[i] != '\0')
		{
			cout <<arr[i];
			i++;
		}
		cout <<endl;
		i--;
	}
	return 0;
}
