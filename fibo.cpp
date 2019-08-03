#include<iostream>
using namespace std;
void fibo(int n){
	int n1=0,n2=1,n3;
	cout<<n1<<" "<<n2<<" ";
	for(int i=3;i<n;i++){
		n3=n2+n1;
		cout<<n3<<" ";
		n2=n1;
		n3=n2;
	}
}
int main(){
	int n;
	cout<<"Program for fibonacci series-->"<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"Enter number of elements-->"<<endl;
	cin>>n;
	fibo(n);
	return 0;
}
