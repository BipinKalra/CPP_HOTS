#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int k,g;
	char i,j,n;
	cout<<"--------------------------------------------------------------------------------";
	cout<<"ALPHABET TRIANGLE"<<endl;
	cout<<"--------------------------------------------------------------------------------";
	cout<<"Enter the alphabet till which you want to view (in small letters)- ";
	cin>>n;
	for(i='a';i<=n;i++)
	{
		for(k=97,j='a',g=1;j<=i,k<=i;j++,k++)
		{
			cout<<g++<<"-"<<j<<" ";
		}
		cout<<endl;
	}
	cout<<"--------------------------------------------------------------------------------";
	
	
getch();
return 0;
}
