// library
#include<iostream>
using namespace std;

/*
  Write a C++ program to find sum of all natural numbers between 1 to n using recursion.
*/

// f(x)=x+(x-1)
int nat ( int n){
	
	if(n!=0){
		return n+nat(n-1);
	}
}




int main(){
	cout<< "till what number you want to know the sum of natural numbers ?"<<endl;
	int n;	
	cin>>n;
	cout<< "the sum is "<<  nat(n) << endl;
	return 0;
	}
