#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,k,rows;
	cout<<"--------------------------------------------------------------------------------";
	cout<<"HOLLOW RECTANGLE"<<endl;
	cout<<"--------------------------------------------------------------------------------";
	cout<<"ENTER NO OF ROWS:";
	cin>>rows;
	for(i=1;i<=rows;i++)
	{
		if((i==1)||(i==rows))
		{
			for(j=1;j<=rows;j++)
			cout<<"*";
			
		}
		else
		{
			cout<<"*";
			for(k=1;k<rows-1;k++)
			{
				cout<<" ";
			}
			cout<<"*";
			
			
		}
		cout<<endl;
	}
	cout<<"--------------------------------------------------------------------------------";
	
getch();
return 0;
}
