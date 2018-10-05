// library
#include<iostream>
using namespace std;

/*
 . Write a C++ program to print all even or odd numbers in given range using recursion.
*/
int nateven (int i, int n){
	if( i==n+1) {
			
		return i;
	}
	else{
	 	if (i%2==0) {
			cout<<i<<endl;
			}
			
		nateven(++i,n);		
	}
}

int natodd (int i, int n){
	if( i==n+1) {
			
		return i;
	}
	else{
	 	if (i%2==1) {
			cout<<i<<endl;
			}
			
		natodd(++i,n);		
	}
}


int main(){
	cout<< "till what number you want to know the even numbers ?"<<endl;
	int n;	
	cin>>n;
	cout<<"even numbers in your range are"<<endl;
	nateven(1,n);
	cout<<"odd numbers in your range are"<<endl;
 	natodd(1,n);
	}
