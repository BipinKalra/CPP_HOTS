#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
//errors need to be corrected
int main()
{
	int r,i=0,a,sum=0,d,n[40];
	cout<<"--------------------------------------------------------------------------------";
	cout<<"BINARY TO DECIMAL"<<endl;
	cout<<"--------------------------------------------------------------------------------";
	cout<<"\nEnter binary value (upto 40 digits)- ";
	for(int i=0;i<40;i++)
	{
		cin>>n[i];
	}
	
	cout<<"The decimal value = ";
	
	for(int j=0;j<=sizeof(n);j+=4)
	{
		d=(n[j]*1000)+(n[j+1]*100)+(n[j+2]*10)+n[j+3];
				
		do
		{
			r=d%10;
			a=r*pow(2,i);
			sum=sum+a;
			d=d/10;
			++i;
		}while(d>=0);
		
		cout<<sum<<" ";
		
	}
	
getch();
return 0;
}
