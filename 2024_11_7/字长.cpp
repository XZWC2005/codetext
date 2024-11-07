#include <iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n >>k;
	if(n%k == 0) cout <<n/k <<" "<<n;
	else cout <<n/k+1 <<" "<<(n/k+1)*k <<endl;
	return 0;
}
