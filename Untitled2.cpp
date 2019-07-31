#include<iostream>
using namespace std;
int palindrome(int n){
	int temp=0,r;
	while(n>0){
	
	r=n%10;
	temp=temp*10+r;
	n=n/10;
}
	return temp;
}
int main(){
	int n1,m;
	cout<<"Palindrome of number"<<endl;
	cout<<"Enter a number--> ";
	cin>>n1;
	m=palindrome(n1);
	cout<<"value of m-->"<<m<<endl;
	cout<<"value of n1-->"<<n1<<endl;
	if(m==n1){
		cout<<"Number is palindrome";
	}
	else{
	
		cout<<"Not Palindrome";
	}
	return 0;
}

