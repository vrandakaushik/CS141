// library
#include <iostream>
//namespace
using namespace std;
	//define  anew function before the driver function
	int sum(int a,int b){			//the new function with its parameters
	return(a+b);				//the statement that we need in return
	}
	int main(){
	int a,b;				//we again have to define the function
	cout<<"first number"<<endl;     	
	cin>>a;
	cout<<"second number"<<endl;
	cin>>b;				
	cout<<sum(a,b)<<endl; 			//we can use the function directly
	}
