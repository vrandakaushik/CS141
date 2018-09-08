// library
#include <iostream>
//namespace
using namespace std;
		/*write a program with a function that takes 2 int parameters adds them returns the 			maximum */
		//define  anew function before the driver function
	int max(int a,int b){
		if(a>b){
		return a;
		}
		else if(a==b){
		cout<<"both the numbers are equal";
		}
		else{
		return b;
		}			
					
	}
	
			/* goal is smae as above the function should be void takes a third pass by 			reference parameter 		then puts the sum in that
		void sumA(int a,int b,int &c){			
		 c=a+b;				
		}*/
	
		/*the program shoould ask the user for the two numbers then call the function with thhe 		numvbres 	as argumnets then tell the user the maximum*/
	int main(){
	int a,b;				//we again have to define the variable
	cout<<"first number"<<endl;     	
	cin>>a;
	cout<<"second number"<<endl;
	cin>>b;				
	cout<<max(a,b)<<endl; 			//we can use the function directly
	}
	
