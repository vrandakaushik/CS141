#include<iostream>

using namespace std;

/*UpperCase and LowerCase
Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.
Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.
Write a main program, that calls the above function based on the input of the user. If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value and vice-versa.*/

/*Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.*/

char toUpper(char ch)
{
	return ch-32;
}

/*Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.*/

char toLower(char ch)
{
	return ch+32;
}

/*Write a main program, that calls the above function based on the input of the user. If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value and vice-versa.*/

int main()
{
	
	char cha;

	cout<< "Enter a character  to change case :";
	cin>>cha;

	if(cha>='A' &&  cha<='Z' ){
		cout<<toLower(cha);
	}
	else if(cha >='a' && cha <='z'){
		cout<<toUpper(cha);
	}
	else {
		cout<<"  please enter some alphabet  ";

	}
	cout<<endl;
}

		

	

