#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int i = 0;
	for(i = 0;i<s.size();i++)
	{
		s[i] = toupper(s[i]);
	}	
	cout <<s <<endl;
	return 0;
}
