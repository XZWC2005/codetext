#include <bits/stdc++.h>
using namespace std;
int main(){
	float a,pi=3.1415926;
	char c;
	cin >>c >>a;
	if(c=='A') a=2*pi*a/360;
	if(c=='R') a= 360*a/2/pi;
    cout <<fixed <<setprecision(2)<<(double)a <<endl;
	return 0;
}
