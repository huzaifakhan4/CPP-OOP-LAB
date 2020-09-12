//Create a class named 'Doctor' with String variable 'name' , 'registrationNo', 'specilization' and integer variable 'phoneNo'.
//Assign the value of phoneNo as '0300 0000000' and that of name as "John" by creating an object of the class Doctor.

#include<iostream>
#include<conio.h>
using namespace std;

class Doctor {
    private:  
	string name;
	string reg_no;
	string Specialization;
	int area , exchange,number;
	public:
	 void getinfo(string dtname, string dtreg_no, string dtspecialization,int dtarea, int dtexchange,int dtnumber)
	 {
	 	name= dtname;
        reg_no=dtreg_no;
        Specialization=dtspecialization;
        area=dtarea;
        exchange=dtexchange;
        number=dtnumber;
    }
	  void showinfo()
	  {
	  	cout<<"\t* Name: "<<name<<endl;
	  	cout<<"\t* Reg_no : "<<reg_no<<endl;
	  	cout<<"\t* Specialization : "<< Specialization<<endl;
	  	cout<<"\t* Contact Number : "<<'('<< area<<')'<<exchange<<"-"<<number<<endl;
	  	cout<<"\n*****************************\n";
	  }
};
int main()
{
	Doctor d1;
	d1.getinfo("John", "G-1490","Neuro Surgeon",300,456,7865);
	cout<<"\n\t----Doctor Bio data----\n"<<endl;
	d1.showinfo();
	getch();
	cout<<"\n   ------Thank You-------\n"<<endl;
	return 0;
}

