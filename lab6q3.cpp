// include library
#include <iostream>
using namespace std;
int main(){
	//pyramid star pattern 
	//print the stars and spaces
	
	for(int i=0;i<5;i++){
		for(int j=0;j<4-i;j++){
		cout<<" ";
		}
		for(int r=0;r<2*i+1;r++){
		cout<<"*";
		}
		for(int j=0;j<4-i;j++){
		cout<<" ";
		}
		cout<<endl;
	
	
	}
}

