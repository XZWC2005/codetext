#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int i = 0,m = s.size()-1;
	while(i<m)
	{
		int temp = s[i];
		s[i] = s[m];
		s[m] = temp;
		i++;
		m--;
	}
	cout <<s <<endl;
	return 0;
}  
