#include<iostream>
using namespace std;
int main(){
	// block of code to be executed
	//Uppercase letters (If or IF) will generate an error.

/*	if(20>18){
		cout<<"20 is greater"<<endl;
	}
	
	int x = 20;
	int y = 18;
	if(x>y){
		cout<<"x is greater than y";
	}
	*/

/* int time = 20;
if(time < 18){
	cout<<"good day";
}	
// block of code to be executed if the condition is false
else{
	cout<<"good evening";
}
*/
 	
 	/*	int time = 22;
 		if(time < 10){
 			cout<<"Good Morning";
		 }
		else if(time<20){
			cout<<"Good Evening";
		}
		else{
			cout<<"Good Night";
		}
		*/
		
 //3.Ternary Operator: variable = (condition) ? expressionTrue : expressionFalse;
  int time = 20;
  string result = (time < 18) ? "Good Day" : "Good Evening";
  cout<<result;


}
