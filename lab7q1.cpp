// library
#include<iostream>
using namespace std;

/*
 Write a C++ program to print all natural numbers between 1 to n using recursion.
*/
int nat (int i, int n){
	
	if( i==n) {
		cout<<n<<endl;		
		return i;
	}
	else{
	 	cout<<i<<endl;
		nat(++i,n);
		
	}
}




int main(){
	cout<< "till what number you want to know the natural numbers ?"<<endl;
	int n;	
	cin>>n;
	nat(1,n);
	}
