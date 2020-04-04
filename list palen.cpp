#include<iostream>
#include<conio.h>

using namespace std;

int palendrome(int x)
{
	int x1,rev=0,r,j,n[50];
	x1=x;
	cout<<endl;
	while(x1!=0)
	{
		r=x1%10;
		rev=(10*rev)+r;
		x1=x1/10;
	}
	if(rev==x)
	{
		cout<<x<<" is palindrome."<<endl;
	}
	
	
}
int main()
{
	int num[50],i,num1[50];
	cout<<"--------------------------------------------------------------------------------";
	cout<<"Palindrome checker - "<<endl;
	cout<<"--------------------------------------------------------------------------------";
	cout<<"Enter Numbers(max 50):";
	for(i=0;i<50;i++)
	{
		cin>>num[i];
		palendrome(num[i]);
		
	}
	cout<<"--------------------------------------------------------------------------------";
	
getch();
return 0;
}
