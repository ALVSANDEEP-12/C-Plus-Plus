//switch case 
#include<iostream>
using namespace std;
int main(){
	
/*	switch(expression) it is used once {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}
*/

/*int day = 4;  //which matches to case 4 and prints thursday
switch(day){
	    case 1:
		cout<<"Monday";
	break;
		case 2:
		cout<<"Tue";
	break;
		case 3:
		cout<<"Wed";
	break;
		case 4:
		cout<<"Thur";
	break;
		case 5:
		cout<<"Friday";
	break;
		case 6:
		cout<<"Saturday";
	break;
}
//break keyword, it breaks out of the switch block.This will stop the execution of more code and case testing inside the block
*/

//Using default as a keyword
int day = 4;
switch (day) {
  case 6:
    cout << "Today is Saturday";
    break;
  case 7:
    cout << "Today is Sunday";
    break;
  default:
    cout << "Looking forward to the Weekend";
}



}
