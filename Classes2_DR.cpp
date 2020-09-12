//Assign and print the phone number and address of two Doctor having names "Sam" and "John" respectively by creating two objects of class 'Doctor'.

#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class Phone{
	int area;
    int exchange;
    int number;
};
class Doctor{
	public:
	char name[10];
	char address[20];
    int area, exchange, number;
};
int main()
{
	Doctor d1,d2;
	strcpy(d1.name,"Sam");
	strcpy(d1.address,"Phase-V DHA Lahore");
	d1.area=300;
	d1.exchange=453;
	d1.number= 7834;
	strcpy(d2.name,"John");
	strcpy(d2.address,"Phase-VII DHA Lahore");
	d2.area=300;
	d2.exchange=467;
	d2.number= 5213;
	cout<<"\n\n   ---------- Bio Data of 1st Doctor ----------\n";
    cout<<"\n* Name of Doctor is: "<<d1.name<<endl;
	cout<<"\n* Address of Doctor is: "<<d1.address<<endl;
    cout<<"\n* Contact Number of Doctor is: "<<'('<<d1.area<<')'<< d1.exchange<<"-"<<d1.number<<endl;
	cout<<"\n--------------------------------------------\n";
	cout<<"\n\n   ---------- Bio Data of 2nd Doctor ----------\n";
    cout<<"\n* Name of Doctor is: "<<d2.name<<endl;
	cout<<"\n* Address of Doctor is: "<<d2.address<<endl;
    cout<<"\n* Contact Number of Doctor is: "<<'('<<d2.area<<')'<< d2.exchange<<"-"<<d2.number<<endl;
	cout<<"\n--------------------------------------------\n";
	
	getch();
	cout<<"\n**********Thank You***********"<<endl;
	return 0;
}
