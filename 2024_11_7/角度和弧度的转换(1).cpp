#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a = 0;
	cin >>a;
	double pi = 3.1415926,c = 2*pi*a/360;
	cout <<fixed <<setprecision(2)<<c <<endl;
	return 0;
}
