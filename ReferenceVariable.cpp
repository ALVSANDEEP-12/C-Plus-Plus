//Refernces:A reference variable is a "reference" to an existing variable, and it is created with the & operator
// & operator was used to create a reference variable
#include<iostream>
using namespace std;
int main(){

/*	string petname = "Julie" ;
	string &animal =  petname;
	cout<<petname;
	cout<<animal;
	*/
	
	string food = "pizza";
	cout << &food; //output is in hexadecimal format
	
	//References and Pointers are important in C++, because they give you the ability to manipulate the data in the computer's memory - which can reduce the code and improve the performance
	
}
