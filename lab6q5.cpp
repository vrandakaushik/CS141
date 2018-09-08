// library
#include <iostream>
//namespace
using namespace std;
//write a program that includes the three functions.
 	int sum(int a,int b){			
	return(a+b);				
	}
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
//write a main functiom that asks user to input 2 variables and ask the user to what opeartion does he want to perform. based ont his input,
	int main(){
	int a,b;
	char f;
	char s= 's';
	char m= 'm';
	
	cout<<"first number"<<endl;
	cin>>a;
	cout<<"second number"<<endl;
	cin>>b;
	cout<<"what is the function you want to perform?"<<endl;
	cin>>f;
		if(f==s){
		
		cout<<sum(a,b);
		
		}
		else if(f==m){
		cout<<max(a,b);
		}
		else{
		cout<<min(a,b);
		}
	}
	
	
 
//call the required function and display the output










































