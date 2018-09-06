// include library
#include <iostream>
using namespace std;
int main(){
	//rhombus star pattern 
	//print the square pattern and introduce the spaces
	//print the columns
	for(int i=0;i<5;i++){
	//print the rows and spaces thus required
		for(int j=0 ;j<5-i;j++){
		cout<<" ";
		}
		for(int j=0;j<5;j++){
		cout<<"*";		
		}
	cout<<endl;
	}
}
	//hv to print 5 rows and 5 columns

