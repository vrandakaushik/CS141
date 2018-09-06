// include library
#include <iostream>
using namespace std;
int main(){
// hollow square star pattern
	//print the stars spaces at the required place
	for(int i=1;i<6;i++){
		if(i==1){
			for(int j=0;j<5;j++){
			cout<<"*";
			
			}
		
		}
		else if(i==5){
			for(int j=0;j<5;j++){
			cout<<"*";
			
			}
		
		}
		
		else{
		cout<<"*";
			for(int j=0;j<3;j++){	
			cout<<" ";
			}
		cout<<"*"; 
				
			
		}
	cout<<endl;
	}
	
}
