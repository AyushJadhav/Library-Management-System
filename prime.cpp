#include<iostream>
using namespace std;
void prime(int m){
	int t=m/2,flag=0;
	for(int i=2;i<=t;i++){
		if(m%i==0)
			flag=1;
	}
	if(flag==1)
		cout<<"Not a prime no"<<endl;
	else
		cout<<"Prime no"<<endl;	
}
int main(){
	int n[30],m;
	char ch;
	do{
	
	cout<<"Enter the number-->"<<endl;
	cin>>m;
	prime(m);
	cin>>ch;
}while(ch!='x');
	/*for(int i=0;i<=m;i++){
	
	cout<<"Enter the number--> "<<endl;
	cin>>n[i];
}*/
	
	return 0;
}
