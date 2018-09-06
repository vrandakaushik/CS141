// include library
#include <iostream>
using namespace std;
int main(){
	//daimond star pattern 
	//print the stars and spaces
	
	for(int i=0;i<5;i++){
		//print space
		for(int j=0;j<4-i;j++){
		cout<<" ";
		}
		//print star
		for(int r=0;r<2*i+1;r++){
		cout<<"*";
		}
	
	cout<<endl;
	
	
	}
	for(int i=1;i<5;i++){
		for(int j=0;j<i;j++){
		cout<<" ";
		}
		for(int r=0;r<9-2*i;r++){
		cout<<"*";
		}
	cout<<endl;
	}	
}

