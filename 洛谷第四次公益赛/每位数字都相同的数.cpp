#include <iostream>
using namespace std;
int main(){
	int n = 0;
	cin >>n;
	int i = 0;
	long long sum = 0;
	for(i = 1;i<=n&&i<=9;i++)
		sum += i;
	for(i=11;i<=n&&i<=100;i = i+11)
		sum += i;
	for(i=111;i<=n&&i<=1000;i = i+111)
		sum += i;
	for(i=1111;i<=n&&i<=10000;i = i+1111)
		sum += i;
	for(i=11111;i<=n&&i<=100000;i = i+11111)
		sum += i;
	for(i=111111;i<=n&&i<=1000000;i = i+111111)
		sum += i;
	for(i=1111111;i<=n&&i<=10000000;i = i+1111111)
		sum += i;
	for(i=11111111;i<=n&&i<=100000000;i = i+11111111)
		sum += i;
	for(i=111111111;i<=n&&i<=1000000000;i = i+111111111){
		sum += i;
	}
	cout <<sum <<endl;
	return 0;
} 
