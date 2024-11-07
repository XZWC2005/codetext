#include <iostream>
using namespace std;
int main()
{
	int a = 0,b = 0;
	cin >>a >>b;
	int c = a>b?b:a;
	for(c;c>1;c--)
	{
		if(a%c == 0 && b%c == 0)
			break;
	}
	cout <<c <<" "<<a*b/c <<endl;
	return 0;
}

