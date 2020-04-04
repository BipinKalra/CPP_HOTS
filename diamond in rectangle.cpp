#include<iostream>
#include<conio.h>
//convert to code for rectangle of n size
using namespace std;
int main()
{
	int i,j,k,m,z;
	for(i=1;i<=5;i++)
	{
		for(k=5;k>i;k--)
		{
			cout<<"*";
		}
		cout<<"*";
		for(m=(2*i)-2;m>1;m--)
		{
			cout<<" ";
		}
		if(i>1)
		{
				cout<<"*";
		}
		for(j=i;j<=4;j++)	//for printing stars after diamond line
		{
			cout<<"*";
		}
		 cout<<endl;
	
	}
	
	for(i=1;i<=4;i++)
	{
		for(z=1;z<=i;z++)
		{
			cout<<"*";
		}
	cout<<"*";
	for(k=6-((2*i)-1);k>=1;k--)
	{
		cout<<" ";
	}
	if(i<4)
	{
		cout<<"*";
	}
	
	for(j=1;j<=i;j++)		//for printing stars after diamond line
	{
		cout<<"*";
	}
	cout<<endl;
	
	}
	
getch();
return 0;
}
