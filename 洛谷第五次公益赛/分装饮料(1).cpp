#include <iostream>
using namespace std;
int main(){
	int m,n,arr[100],i,j,d,count = 0;
	cin >>m >>n;
	for(i = 0;i<n;i++) cin >>arr[i];
	for(i = 2;i<n;i++){
		for(j = 1;j<i;j++){
			for(d = 0;d<j;d++){
				if(arr[i]+arr[j]+arr[d] == m)
					count++;
			}
		}
	}
	cout <<count <<endl;
	return 0;
} 
