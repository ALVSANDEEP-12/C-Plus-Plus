//Create Pointers:It is a variable that stores the memory address as its value.
#include<iostream>
using namespace std;
int main(){
//	string food = "Pizza";
//	string * ptr = &food;
//	string *ptr = &food;
/*
	string* ptr = &food; -->better to prefer this
	cout<<food<<endl;
	cout<<&food<<endl;
	cout<<ptr<<endl;
	*/
	
	//2.Dereferencing:pointer to get the value of the variable, by using the * operator
	
/*	string food = "pizza";
	string* ptr = &food;
	
	cout<< ptr <<endl; //as usual pointer concept which predicts the food variable memory location
	cout<< *ptr<<endl; //Dereference
	*/
/*Note that the * sign can be confusing here, as it does two different things in our code:
When used in declaration (string* ptr), it creates a pointer variable.
When not used in declaration, it act as a dereference operator.
	*/
	
	
	//3.Modify Pointers:
	
	string food="rice";
	string* ptr = &food;
	
	cout<<food<<endl; //rice
	cout<<ptr<<endl; //hexadecimal format
	cout<<*ptr<<endl;//rice
	
	*ptr = "lemonrice";
	cout<<food<<endl;//lemonrice
	cout<<*ptr<<endl;//lemonrice	
	
}
