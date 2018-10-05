// library
#include<iostream>
using namespace std;

/*
 Write a C++ program to find sum of all even or odd numbers in given range using recursion.
*/
// f(x)= x+(x-1)
int nateven (int n){
	// if n is even
	if( n%2==0) {
		if(n!=0) return n+nateven(n-2);
			
	}
	else {
		n = n- 1;
		if(n!=0) return n+nateven(n-2);
			
	}
}

int natodd(int n){
	if(n>=1){
	if (n%2!=0){
		if(n > 0) return n+ natodd(n-2);
		
		                                                                                                                                                            
	}
	else{
		n=n-1;
		if(n > 0) return n+ natodd(n-2);
	}
	}
	else{ return n+1;}
}

int main(){
	cout<< "till what number you want to know the sum ?"<<endl;
	int n;	
	cin>>n;
	cout<<"sum of even numbers in your range are"<<nateven(n)<<endl;
	cout<<"sum of odd numbers in your range are"<<natodd(n)<<endl;
	}
