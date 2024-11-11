#include <iostream>
using namespace std;

void itob(int a,char s[],int c)
{
	int i = 0,count = 0;
	if(a<0) a = -a;
	while(a>0)
	{
		int remainer = a%c;
		if(remainer > 9)
			s[i] = 'a' + (remainer - 10);
		else s[i] = '0' + (remainer);
		a /= c;
		i++;
		count++;
	}
	for(i = count - 1;i>=0;i--)
	{
		cout <<s[i];
	}
	cout <<endl;
}

int main()
{
	int n = 0,b = 0;
	cin >>n >>b;
	char s[100] = {'\0'};
	if(n < 0) cout <<'- ';
	itob(n,s,b);
	return 0;
}
