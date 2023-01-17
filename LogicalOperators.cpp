#include<iostream>
using namespace std;
int main(){
//	true(1) and false(0)
  /* int x = 20;
   if(x<5 && x>10){
   	cout<<"It is True";
   }
   else{
   	cout<<"It is False";  //prints this statement because "logical and" operator  
   }
   */
   
 /*  int x = 30;
   if(x>40 || x<100){     //logical or
   	cout<<"It is True";
   }
   else{
   	cout<<"It is False";
   }
   */
   
   int x = 30;
   if (!(x>40 || x<100)){  //logical  not
   	cout<<"It is True";
   }
   else{
   	cout<<"It is False";
   }
   
   
   
	
}
