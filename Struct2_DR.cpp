//Assign and print the phone number and address of two Doctor having names "Sam" and "John" respectively by creating two objects of Structure 'Doctor'
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
struct Phone{
	int area, exchange, number;
};
struct Doctor{
	char name[10];
	char address[20];
	Phone ph;
};
int main()
{
	Doctor d1,d2;
	strcpy(d1.name,"Sam");
	strcpy(d1.address,"Phase-V DHA Lahore");
	d1.ph.area=300;
	d1.ph.exchange=784;
	d1.ph.number=2367;
	strcpy(d2.name,"John");
	strcpy(d2.address,"Phase-VII DHA Lahore");
	d2.ph.area=300;
	d2.ph.exchange=567;
	d2.ph.number=3098;
	cout<<"\n\n   ---------- Bio Data of 1st Doctor ----------\n";
    cout<<"\n* Name of Doctor is: "<<d1.name<<endl;
	cout<<"\n* Address of Doctor is: "<<d1.address<<endl;
    cout<<"\n* Contact Number of Doctor is: "<<'('<<d1.ph.area<<')'<< d1.ph.exchange<<"-"<<d1.ph.number<<endl;
	cout<<"\n--------------------------------------------\n";
	cout<<"\n\n   ---------- Bio Data of 2nd Doctor ----------\n";
    cout<<"\n* Name of Doctor is: "<<d2.name<<endl;
	cout<<"\n* Address of Doctor is: "<<d2.address<<endl;
    cout<<"\n* Contact Number of Doctor is: "<<'('<<d2.ph.area<<')'<< d2.ph.exchange<<"-"<<d2.ph.number<<endl;
	cout<<"\n--------------------------------------------\n";
	
	getch();
	cout<<"\n**********Thank You***********"<<endl;
	return 0;
}
