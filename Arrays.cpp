//ARRAYS:Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value

#include<iostream>
using namespace std;
int main(){
/*	string cars[4] = {"Alto-k10","BMW","FORD","Swift"};
	for(string i:cars){
		cout<<i<<" ";
	}
	return 0;
	*/
	
/*	int mynum[3]={1,2,3};
	mynum[0]=5;
//	cout<<mynum[0]<<endl;
		for(int i:mynum){
		cout<<i<<" ";
		}
		*/
		
/*string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
for (int i = 0; i < 5; i++) {
  cout << i << " = " << cars[i] << "\n";
}
*/

//sizeof() operator;

//int mynum[3] = {1,2,3};
//cout<<sizeof(mynum);

//int size = 4 bytes * size of elements(3) = output(12)

int mynum[3] = {1,2,3};
cout<<sizeof(mynum)/sizeof(int);

	
}
