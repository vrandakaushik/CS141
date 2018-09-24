//library
#include<iostream>
using namespace std;
/*Sum of even and odd
Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop); create a user-defined function called sumEvenNumbers(). Use call-by-value
Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); create a user-defined function called sumOddNumbers(). Use call-by-value
Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareOddNumbers(). Use Call-by-Value. 
Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value. 
Write a main program. 
Declare a variable called sumEven in the main() for the sumEvenNumbers(). sumEvenNumbers() is a value returning function. Use sumEven to hold a returned value.
Declare a variable called sumOdd in the main() for the sumOddNumbers(). sumOddNumbers() is a value returning function. Use sumOdd to hold a returned value.
Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). sumSqureEvenNumbers() is a value returning function. Use sumSquareEven to hold a returned value.
Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). sumSqureOddNumbers() is a value returning function. Use sumSquareOdd to hold a returned value.
Then display the values*/

/*Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop); create a user-defined function called sumEvenNumbers(). Use call-by-value*/

int sumEvenNumbers(int a,int b)
{
	int sum=0;
	for(int i=a+1;i<b;i++)
	{sum=sum+((i%2)?0:i);
	cout<<sum;}
	return sum;
}

/*Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); create a user-defined function called sumOddNumbers(). Use call-by-value*/


int sumOddNumbers(int a,int b)
{
	int sum=0;
	for(int i=a+1;i<b;i++)
	sum=sum+((i%2)?i:0);

	return sum;
}

/*Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareOddNumbers(). Use Call-by-Value. */
int sumSqureOddNumbers(int a,int b)
{
	int sum=0;
	for(int i=a+1;i<b;i++)
	{sum=sum+((i%2)?i*i:0);
	
	}
	return sum;
}


/*Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value. */

int sumSqureEvenNumbers(int a,int b)
{
	int sum=0;
	for(int i=a+1;i<b;i++)
	sum=sum+((i%2)?0:i*i);

	return sum;
}



/*Write a main program. 
Declare a variable called sumEven in the main() for the sumEvenNumbers(). sumEvenNumbers() is a value returning function. Use sumEven to hold a returned value.
Declare a variable called sumOdd in the main() for the sumOddNumbers(). sumOddNumbers() is a value returning function. Use sumOdd to hold a returned value.
Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). sumSqureEvenNumbers() is a value returning function. Use sumSquareEven to hold a returned value.
Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). sumSqureOddNumbers() is a value returning function. Use sumSquareOdd to hold a returned value.
Then display the values*/

int main()
{
	int x,y;
	
	cout<<endl<<"Enter two numbers to sum even number between :";
	cin>>x>>y;
	
	
	int sumEven = sumEvenNumbers(x,y);
	int sumOdd = sumOddNumbers(x,y);
	int sumSquareEven = sumSqureEvenNumbers(x,y);
	int sumSquareOdd = sumSqureOddNumbers(x,y);
	

	
	cout<<"value of sumEven is : "<<sumEven;
	cout<<"value of sumOdd is : "<<sumOdd;
	cout<<"value of sumSquareEven is : "<<sumSquareEven;
	cout<<"value of sumSquareOdd is : "<<sumSquareOdd;
	




	cout<<endl;

		
}
