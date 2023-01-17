#include<string> //include for sake as string library
#include<iostream>
using namespace std;
int main(){
// ------ 1.concatenation -------

	/*string fname="Adari";
	string lname="sandeep";
	string fullname=fname+lname;
	cout<<fullname;
	*/
	
// ------ concatenation with spaces ------;

    /*	
    string fname = "Adari";
	string lname = "Sandeep";
	string fullname = fname + ' ' + lname; //can use double quotes also ""
	cout<<fullname;
	*/
	
//  ------ 2.Append() -----

  /*  string fname = "Adari";
	string lname = " Sandeep";
	string fullname = fname.append(lname);
	cout<<fullname;
	*/
	
//   ----- 3.length() or size()------
     //to get the length of the string

/*	string txt = "PRODUCTBASEDCOMPANIES";
	cout << "The length of the txt string is: " << txt.length();
*/

//string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//cout << "The length of the txt string is: " << txt.size();

//       -----4.Accessing the Strings using index concept-----

//string myname = "hello";
//cout<<myname[0]; //prints the first character
//cout<<myname[1];
                  //change string characters
       /* string name = "hello";
        name[0]='k';
        cout<<name;
        */
        
 //special characters:
 
 string txt = "this is \"sandeep\" adari";
 cout<<txt<<endl;
 
 string txt1 = "it\'s alright..";
 cout<<txt1;
 
 string txt2 = "ok lets keep \\ going on";
 cout<<txt2; //prints on a single inside the text 



	
}
