// library
#include <iostream>
//namespace
using namespace std;
	/*write a program with a function that takes 2 int parameters adds them returns the sum */
	//define  anew function before the driver function
	int sum(int a,int b){			//the new function with its parameters
	return(a+b);				//the statement that we need in return
	}

	/* goal is smae as above the function should be void takes a third pass by reference parameter 		then puts the sum in that*/
	void sumA(int a,int b,int &c){			
	 c=a+b;				
	}
	
	/*the program shoould ask the user for the two numbers then call the function with thhe numvbres 	as argumnets then tell the sum to user*/
	int main(){
	int a,b;				//we again have to define the function
	cout<<"first number"<<endl;     	
	cin>>a;
	cout<<"second number"<<endl;
	cin>>b;				
	cout<<sum(a,b)<<endl; 			//we can use the function directly
	int sum;
	sumA(a,b,sum);
	cout<<sum;
	}

	
