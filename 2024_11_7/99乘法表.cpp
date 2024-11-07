#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int i = 0,j = 0;
	for(i=1;i<=9;i++){
		int z = 0;
		for(j = 1;j<=5;j++){
			int t = j;
			while(t != 5){
				t++;
				cout <<setw(2);
			}
			for(z = 6 - j;z<=10-j;z++)
				cout <<setw(7) <<i <<"*"<<z <<"="<<i*z;
			cout <<endl;
		}
		for(j = 6;j<=9;j++){
			int i = j - 5;
			while(i>=1){
				i--;
				cout <<setw(7);
			}
			for(z = j-4;z<= 14 - j;z++){
				cout <<setw(2) <<i <<"*"<<z <<"="<<i*z;
			}
			cout <<endl; 
		}
	}
	return 0;
} 
