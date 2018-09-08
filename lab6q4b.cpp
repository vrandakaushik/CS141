// library
#include <iostream>
//namespace
using namespace std;
			/*write a program with a function that takes 2 int parameters adds them returns 			the maximum */
			//define  anew function before the driver function
	int min(int a,int b){
		if(a>b){
		return b;
		}
		else if(a==b){
		cout<<"both the numbers are equal";
		return 0;
		}
		else{
		return a;
		}			
					
	}
	
			/* goal is smae as above the function should be void takes a third pass by 				reference parameter then puts the maximum in that*/
	void minA(int a,int b,int &c){			
		if(a>b){
		c=b;
		}
		else if(a==b){
		c=a;
		cout<<"both the numbers are equal";
		}
		else{
		c=a;
		}				
	}
	
			/*the program shoould ask the user for the two numbers then call the function 				with thhe numvbres as argumnets then tell the user the maximum*/
	int main(){
	int a,b;				//we again have to define the variable
	int C;	
	cout<<"first number"<<endl;     	
	cin>>a;
	cout<<"second number"<<endl;
	cin>>b;				
	minA(a,b,C);				//we can use the function directly
	cout<<C;
	}		

	
