#include <iostream>
using namespace std;
int main(){
	int r1,c1,r2,c2;
	cin >>r1 >>c1 >>r2 >>c2;
	int ret1 = r1>r2?r1:r2,ret2 = c1>c2?c1:c2;
	int ret3 = r1<r2?r1:r2,ret4 = c1<c2?c1:c2;
	cout <<(ret1-ret3+1)*(ret2-ret4+1) <<endl;
	return 0;
}
