#include<iostream>
#include<string>
//using namespace std;
int main(){

/*	string fullname;
	cout<<"Enter Your FullName: ";
	cin>>fullname;
	cout<<fullname;
	*/
	
	//eg: I entered the fullname as sandeep adari but here prints only sandeep and adari is missing.
// --To overcome this problem use the function called getline();

/*string fullname;
cout<<"Enter your fullname: ";
getline(cin,fullname);
cout<<fullname;
*/

//omitting namespace

   std::string fullname;
   std::cout<<"Enter Your name: ";
   getline(std::cin,fullname);
   std::cout<<fullname;
	
}
