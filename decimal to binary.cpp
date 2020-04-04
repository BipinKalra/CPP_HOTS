#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	long n,r,sum=0,i=1;
	cout<<"--------------------------------------------------------------------------------";
	cout<<"DECIMAL TO BINARY CONVERSION"<<endl;
	cout<<"--------------------------------------------------------------------------------";
	cout<<"Enter any 2 digit number - ";
	cin>>n;
	do
	{
		r=n%2;
		sum=sum+(i*r);
		n=n/2;
		i=i*10;
	}while(n>0);
	
	cout<<"Binary value - "<<sum;
	cout<<"--------------------------------------------------------------------------------";

getch();
return 0;
}
