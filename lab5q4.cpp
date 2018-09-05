	//include library
#include<iostream>
using namespace std;
int main(){	
	//declare the variables	
	int a;
	int b;
	int c;
	cout<<"what is the angle 1?"<<endl;    
	cin>>a;                         
	cout <<"what is the angel 2?"<<endl;
 	cin>>b;
    	cout<<"what is the angle 3?"<<endl;
 	cin>>c;                        //ask the ques
					//input the value
	int C= a+b+c;
	if (C==180) {
		cout<<"the given angles form a triangle. "<<endl;    //tell the condition
	}
	else{
	cout<<"the given angles cannot form a triangle ."<<endl;
        }                                                       //print thhe result
}
