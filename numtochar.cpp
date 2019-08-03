#include<iostream>
using namespace std;
int main(){
	int n,n1,sum=0,r;
	cout<<"Enter the number-->"<<endl;
	cin>>n;
	n1=n;
	while(n>0){
		r=n%10;
		sum=sum*10+r;
		n/=10;
	}
	cout<<"Reverse of a number "<<n1<<" is : "<<sum<<endl;
	while(sum>0)
	{
	
	r=sum%10;
	switch(r)
	{
		case 0:
			cout<<"Zero ";
			break;
		case 1:
			cout<<"One ";
			break;
		case 2:
			cout<<"Two ";
			break;
		case 3:
			cout<<"Three ";
			break;
		case 4:
			cout<<"Four ";
			break;
		case 5:
			cout<<"Five ";
			break;
		case 6:
			cout<<"Six ";
			break;
		case 7:
			cout<<"Seven ";
			break;
		case 8:
			cout<<"Eight ";
			break;
		case 9:
			cout<<"Nine ";
			break;
											
	}sum=sum/10;
}
	return 0;
}
