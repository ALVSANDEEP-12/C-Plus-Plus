#include<iostream>
using namespace std;
int main(){
	int x = 5;
	 x +=3; // x=x+3 --> x=5+3 = 8
	 x -=3;
	 x *=3;
	 x /=3;
	 x %=3;
	 x &=3;   //should know about binary format and also truth table for and gate
	 x |=3;   //or gate
	 x ^=3;   //xor gate
	 x >>=3;   //right shift
	 x <<=3;   //left shift
	 cout<<x;
}
