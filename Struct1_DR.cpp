//Create a structure named 'Doctor' and 'Date',  with String variable 'name' , 'registrationNo', 'specilization' and integer variable 'dateOfJoining', 'phoneNo'.
//Assign the value of phoneNo as '0300 0000000' and that of name as "John" by creating an object of the structure Doctor.

#include<iostream>
#include<conio.h>
using namespace std;
struct Phone{
	int area, exchange, number;
};
struct Doctor{
	string name;
	string reg_no;
	string specialization;
	Phone ph;
};
struct Date{
	int date_0f_joining;
	int month_0f_joining;
	int year_0f_joining;
};

int main()
{     
	Doctor dr;
	dr.name="John";
	dr.reg_no="G-7123";
	dr.specialization="Neuro Surgeon";
	dr.ph.area=300;
	dr.ph.exchange=100;
	dr.ph.number=1000;
	Date dt ={12,3,2015};
	cout<<"\n\n   ---------- Bio Data of Doctor----------\n";
    cout<<"\n* Name of Doctor is: "<<dr.name<<endl;
	cout<<"\n* Registartion No. of Doctor is: "<<dr.reg_no<<endl;
	cout<<"\n* Specialization of. Doctor is:"<<dr.specialization<<endl;
	cout<<"\n* Contact Number of Doctor is: "<<'('<<dr.ph.area<<')'<< dr.ph.exchange<<"-"<<dr.ph.number<<endl;
	cout<<"\n* Date of Joining: "<<dt.date_0f_joining<<"-"<<dt.month_0f_joining<<"-"<<dt.year_0f_joining<<endl;
	cout<<"\n--------------------------------------------\n";
	getch();
	cout<<"\n**********Thank You***********"<<endl;
	return 0;
}

