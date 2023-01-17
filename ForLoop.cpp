//for loop:

/*for(datatype variable = something value;condition;incr/decr){
	printing the stmts
}
*/

#include<iostream>
using namespace std;
int main(){
/*	for(int i= 0;i<5;i++){
		cout<<i<<endl;
	}
	*/

/*	checking even numbers
	for(int i=0;i<=50;i+=2){
		cout<<i<<endl;
	}
	checking odd numbers
	for(int i=1;i<=50;i+=2){
		cout<<i<<endl;
	}
	*/
	
	//NESTED LOOPS:(TIME COMPLEXITY:6 = M*N =2*3)
/*	for(int i = 1;i<=2;i++){
		cout<<"Outer: "<<i<<endl;
		
		for(int j=1;j<=3;j++){
			cout<<" Inner:"<<j<<endl;
		}
		
	}
	*/
	
	//ForEach loop:which is used to loop through elements in an array
	
	//datatype arrayName[size] = {};
	/*for(datatype variableName:arrayName){
		//code block to be executed
	}
	*/
	
	int myname[5] = {1, 2, 3, 4, 5};
	for (int i : myname) {
		cout<<i<<" ";
	}
	return 0;	
	
}



