#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cin >>n;
	vector<int> newMembers(n);
	for(int i=0;i<n;++i){
		cin >>newMembers[i];
	}
	int t;
	cin >>t;
	int a=0;
	for (int i=0;i<n;++i){
		if(newMembers[i]>t){
			a++;
		}
	}
	cout <<a <<endl;
	return 0;
}
