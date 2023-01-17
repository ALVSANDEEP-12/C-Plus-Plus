//structures:Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure
// a structure can contain many different data types (int, string, bool, etc.).

#include<iostream>
using namespace std;
//int main(){
	//one structure one variable:
/*	struct{
		int mynum;
		string mystring;
	} myStructure;
myStructure.mynum=1;
myStructure.mystring="welcome mom and dad";

cout<<myStructure.mynum<<endl;
cout<<myStructure.mystring<<endl;
*/

  	//one structure multiple variable:
  /*	struct{
  		string brand;
  		string model;
  		int year;
	  }myCar1,myCar2;
	  
	  // Put data into the first structure
myCar1.brand = "BMW";
myCar1.model = "X5";
myCar1.year = 1999;

// Put data into the second structure
myCar2.brand = "Ford";
myCar2.model = "Mustang";
myCar2.year = 1969;

// Print the structure members
cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
  	
  	*/
  	
  	//Named Structures:
  	          //structure name is school
  	          //this structure is defined outside of main method
  	struct school{
  		int year;
  		string name;
	  };
	  
	  int main(){
	  	school sc;
	  	sc.year=1999;
	  	sc.name="chaitanya";
	  	
	  	school sc1;
	  	sc1.year=2000;
	  	sc1.name="narayana";
	  	
	  	cout<<sc.year<<" "<<sc.name;
	  	
	  }

