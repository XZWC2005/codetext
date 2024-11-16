#include <iostream>
using namespace std;
int main(){
	int n = 0;
	cin >>n;
	int i = 0,count = 0;
	for(i = 1;i<=n&&i<=9;i++){
		cout <<i <<endl;
		count++;
	}
	for(i=12;i<=n&&i<=89;i = i+11){
		cout <<i <<endl;
		count++;
	}
	for(i=123;i<=n&&i<=789;i = i+111){
		cout <<i <<endl;
		count++;
	}
	for(i=1234;i<=n&&i<=6789;i = i+1111){
		cout <<i <<endl;
		count++;
	}
	for(i=12345;i<=n&&i<=56789;i = i+11111){
		cout <<i <<endl;
		count++;
	}
	for(i=123456;i<=n&&i<=456789;i = i+111111){
		cout <<i <<endl;
		count++;
	}
	for(i=1234567;i<=n&&i<=3456789;i = i+1111111){
		cout <<i <<endl;
		count++;
	}
	for(i=12345678;i<=n&&i<=23456789;i = i+11111111){
		cout <<i <<endl;
		count++;
	}
	for(i=123456789;i<=n&&i<=123456789;i = i+111111111){
		cout <<i <<endl;
		count++;
	}
	cout <<count <<endl;
	return 0;
} 
