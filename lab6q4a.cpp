// library
#include <iostream>
//namespace
using namespace std;
		/*write a program with a function that takes 2 int parameters adds them returns the 			minimum */
		//define  anew function before the driver function
	int min(int a,int b){
		if(a>b){
		return b;
		}
		else if(a==b){
		cout<<"both the numbers are equal ";
		return 0;
		}
		else{
		return a;
		}			
					
	}
		/*the program shoould ask the user for the two numbers then call the function with thhe 		numvbres 	as argumnets then tell the user the maximum*/
	int main(){
	int a,b;				//we again have to define the variable
	cout<<"first number"<<endl;     	
	cin>>a;
	cout<<"second number"<<endl;
	cin>>b;				
	cout<<min(a,b)<<endl; 			//we can use the function directly
	}
	
