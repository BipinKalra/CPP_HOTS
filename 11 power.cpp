#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
	int i,j,k,s,r,m,n;
	cout<<"--------------------------------------------------------------------------------";
	cout<<"INTERESTING PATTERNS IN THE POWERS OF 11"<<endl;
	cout<<"--------------------------------------------------------------------------------";
	cout<<"\nEnter the greatest power of 11 you want to view - ";
	cin>>n;
	for(int i=0;i<=(n/2)+(n-3);i++)
	{
		cout<<" ";
	}
	cout<<"1";
	for(i=0;i<=n;i++)
	{
		for(k=n;k>i;k--)
			{
				cout<<" ";
			}	
		
		s=pow(11,i);
		for(m=1;m<=((n/2)*i)-1;m++)
		{
			cout<<" ";
			while(s!=0)
			{
				r=s%10;
				s=s/10;
				cout<<r;
			break;	
			} 
			
		}
		
		
		cout<<endl; 
	}
	cout<<"\n--------------------------------------------------------------------------------";	
	
getch();
return 0;
}
