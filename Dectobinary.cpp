#include<iostream>
#include<math.h>
using namespace std;
//---------------------------------------------------------------
int bitodec(int n){
int c=0,res=0,temp;

for(c=0;n>0;c++){
	temp=n%10;
	res=res+temp*pow(2,c);
	n=n/10;
}
cout<<res;
cout<<endl; 	
}
//----------------------------------------------------------------
int dectobi(int n){
	int m,c=0, a[20];
for(int i=0;n>0;i++){
	a[i]=n%2;
	n=n/2;
	c++;
}
for(int j=c-1;j>=0;j--){
cout<<" "<<a[j];
}
cout<<endl;
}
//----------------------------------------------------------------
int main(){
int n,m;
int ch;
do{
cout<<"Choose from following options-->"<<endl;
cout<<"1. Binary to decimal conversion.\n2. Decimal to binary conversion.\n3. Exit"<<endl;
cin>>ch;
switch(ch){
	case 1:cout<<"Enter binary number-> "<<endl;
		   cin>>m;
		   bitodec(m);
		   break;
	case 2:cout<<"Enter decimal number-->"<<endl;
		   cin>>n;
		   dectobi(n);
}
}while(ch!=3);
return 0;
}
