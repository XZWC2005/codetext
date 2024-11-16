#include <iostream>
using namespace std;
int main(){
	long long n;
	cin >>n;
	int i = 0,count = 0;
	for(i = 1;i<=n && i<=9;i++){
		int j = 0,b = i + 1;
		for(j = i;j<=n && j%10 != 0;b++){
			cout <<j <<endl;
			j = j*10+b;
			count++;
		}
	}
	cout <<count <<endl;
	return 0;
}		
