#include<iostream>
using namespace std;
int arm(int n){
	int i,t,v=0;
	while(n>0){
	
	t=n%10;
	v=v+(t*t*t);
	n/=10;
}
return v;
}
int main(){
	int n,r;
	char ch;
	do{
	
	cout<<"Enter the number--> "<<endl;
	cin>>n;
	r=arm(n);
	if(r==n)
		cout<<"Armstrong"<<endl;
	else
		cout<<"Not Armstrong"<<endl;
		cin>>ch;
	}while(ch!='x');
		return 0;	
}
