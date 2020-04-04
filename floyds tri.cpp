#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int rows,i,j,k=1;
	cout<<"--------------------------------------------------------------------------------";
	cout<<"FLOYD'S TRIANGLE"<<endl;
	cout<<"--------------------------------------------------------------------------------";
	cout<<"\nEnter number of rows:" ;
	cin>>rows;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<k<<" ";
			k++;
		}	
		cout<<endl;
	}
	cout<<"--------------------------------------------------------------------------------";

getch();
return 0;
}
