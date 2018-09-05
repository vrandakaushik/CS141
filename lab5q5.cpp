#include<iostream>   //include library
using namespace std;
int main(){
	int p;
	int c;
	int b;
	int m;
	int cs;                       //declare the varible
	cout<<"what are your marks in physics , chemistry , mathematics , biologe , and 		computer ?"<<endl;         //use the condition after asking the ques
	cin>>p>>c>>m>>b>>cs;
	float P= ((p+c+m+b+cs)/125.0)*100;       //apply the condition and print the result
	cout<<"Your percentage is "<<P<<"%"<<endl;
	if (P>=90){
		cout<<"your grade is A."<<endl;
	}
	else if(P>=80){
		cout<<"your grade is B."<<endl;
	}
 	else if(P>=70){
			cout<<"your grade is C. "<<endl;
	}
	else if(P>=60){
		cout<<"your grade is D."<<endl;
	}
	else if(P>=50){
		cout<<"your grade is E."<<endl;
	}
	else if(P>=40){
	  	cout<<"your grade is F."<<endl;
	}
	else {
		cout<<"your grade is G."<<endl;
	}
	
}	
	

