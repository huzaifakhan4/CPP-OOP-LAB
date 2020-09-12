/* A class called Authors designed to model a book's author.
It contains:
Three private variables: name (String), email (String), and gender (char of either 'm' or 'f');
One constructor to initialize the name, email, and gender with the given values.
A PrintAuthorsInfo() method that print"Author[name=?,email=?,gender=?]".
*/
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class Authors{
	private:
	string name;
	string email;
	char gender[1];
	public:
	 Authors()        // here Authors is a constructor
	 {
	   name="Qasim Ali Shah";
	   email="qasim31@gamil.com";
	   strcpy(gender, "M");
	   printauthorinfo();
     }
	void printauthorinfo()
	{
	  cout<<"\n\t*---------Authors Information----------\n\n"<<endl;
	  cout<<"\n\t* Author's name is: "<<name<<endl;
	   cout<<"\n\t* Author's email is: "<<email<<endl;
	    cout<<"\n\t* Author's gender is: "<<gender<<endl;
	  	
	}
};
int main()
{
	Authors A;  // Construtor is automatically called with object
	getch();
	cout<<"\n\t----------Thank You-----------\n";
	return 0;
	
}
