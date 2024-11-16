#include <iostream>
using namespace std;
int main(){
	int n,m;
	cin >>n >>m;
	int i = 0,b = 1,c = 0;
	for(i = 0;i<m;i++){
		cin >>c;
		b = b + c;
	}
	if(b%n == 0 && b>=n) cout <<n <<endl;
	else cout <<b-b/n*n <<endl;
	return 0;
}
