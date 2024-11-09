#include <iostream>
using namespace std;
int main(){
	int n;
	cin >>n;
	cout <<n+(n/100+n%10*100+n/10%10*10) <<endl;
	return 0;
}
