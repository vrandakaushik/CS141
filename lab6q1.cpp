//library
#include<iostream>
using namespace std;

/*Tax Rate Calculation using Functions 
Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module. Choose an appropriate name for this function.
Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. Choose an appropriate name for this function.
Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. Choose an appropriate name for this function.
Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue. Your program should call the functions listed above.
Pseudocode and Indentation must be present.*/ 

/*Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module. Choose an appropriate name for this function.*/
void func(float &unitCst,float &units,float &taxRt){
	cout<<" enter the cost of the item "<<endl;
	cin>>unitCst;
	cout<<"how many of them do you want to buy?"<<endl;
	cin>>units;
	cout<<"what is the tax rate on the item bought?"<<endl;
	cin>>taxRt;
} 

/*Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. Choose an appropriate name for this function.*/
void funcR(float unitCst, float units, float taxRt, float &salesTx , float &totDue){
	salesTx= unitCst*taxRt/100;
	totDue=units*salesTx;
}

/*Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. Choose an appropriate name for this function.*/

float output(float unitCst, float units, float taxRt, float salesTx , float totDue){
	cout<<"the cost of your item is "<<unitCst<<" and you have bought "<<units<<" units of it . so with "<<taxRt<<" % tax rate  your total due is "<<totDue<<" and the salex tax on it is  "<<salesTx<< endl;
	
}

/*Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue. Your program should call the functions listed above.*/

int main(){
	float unitCost,unitsPurch,taxRate,salesTax,totalDue;

 	func(unitCost,unitsPurch,taxRate);
	funcR(unitCost,unitsPurch,taxRate,salesTax,totalDue);
	output(unitCost,unitsPurch,taxRate,salesTax,totalDue);
}
	
	
	

