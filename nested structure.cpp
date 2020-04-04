#include<iostream>
#include<conio.h>
using namespace std;

struct date
{
	int day;
	int month;
	int year;
};
struct student
{
	int rollno;
	char name;
	struct date birthday;		
};
int main()
{
	student s1;
	cout<<"ENTER ROLL No:";
	cin>>s1.rollno;
	cout<<"\nENTER NAME:";
	cin>>s1.name;
	cout<<"\nENETR DOB:";
	cin>>s1.birthday.day;
	cin>>s1.birthday.month;
	cin>>s1.birthday.year;
	getch();
	return 0;
}

