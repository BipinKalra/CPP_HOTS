#include<iostream>
#include<conio.h>
using namespace std;
struct date
{
	int dt;
	int mn;
	int year;	
}a,b;

void accept()
{
	cout<<"DATE 1 - "<<endl;
	cout<<"\nEnter day(1-31) - ";
	cin>>a.dt;
	cout<<"Enter month number - ";
	cin>>a.mn;
	cout<<"Enter year - ";
	cin>>a.year;
	
	cout<<"\n\nDATE 2 - "<<endl;
	
	cout<<"\nEnter day(1-31) - ";
	cin>>b.dt;
	cout<<"Enter month number - ";
	cin>>b.mn;
	cout<<"Enter year - ";
	cin>>b.year;	
}
void chk()
{
	int s;
	
	if(a.year>b.year)
		cout<<"\n\nDate 2 comes early - "<<a.dt<<"-"<<a.mn<<"-"<<a.year;
	else 
		if(a.year<b.year)
			cout<<"\n\nDate 1 comes early - "<<b.dt<<"-"<<b.mn<<"-"<<b.year;
		else
			if(a.mn>b.mn)
				cout<<"\n\nDate 2 comes early - "<<a.dt<<"-"<<a.mn<<"-"<<a.year;
			else if(a.mn<b.mn)
				cout<<"\n\nDate 1 comes early - "<<b.dt<<"-"<<b.mn<<"-"<<b.year;
			else
				if(a.dt>b.dt)
					cout<<"\n\nDate 2 comes early - "<<a.dt<<"-"<<a.mn<<"-"<<a.year;
				else 
					if(a.dt<b.dt)
						cout<<"\n\nDate 1 comes early - "<<b.dt<<"-"<<b.mn<<"-"<<b.year;	
					else
						cout<<"\n\nBoth dates are same - ";	
}
int main()
{
	cout<<"--------------------------------------------------------------------------------";
	cout<<"DATE CHECKER."<<endl;
	cout<<"--------------------------------------------------------------------------------";
	accept();
	getch();
	chk();
	cout<<"\n--------------------------------------------------------------------------------";

getch();
return 0;
}
