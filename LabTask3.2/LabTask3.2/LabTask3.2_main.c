/*****************************************************************************
* Programmer:			  Jerome Santos										 *
* Class:				  Java --> C Module, 2017							 *
* Programming Assignment: LabTask3.2										 *
* Date:					  01/07/2017										 *
* Description:			  A Program designed to calculate the sum of the	 *
*						  even numbers in a Fibonacci sequence that is below *
*						  a number n.										 *
*****************************************************************************/

#include <stdio.h>

int isEven(int number);

int main(void)
{
	int numberCap = 0;	// The number that the fibnacci sequence cannot surpass
	int fib1 = 0;		// First Fibonacci number in the sequence
	int fib2 = 1;		// Second Fibonacci number in the sequence
	int nextFib = 0;	// The next Fibonacci number in the sequence by adding the previous 2
	int sum = 0;		// The sum of the even numbers in the sequence

	// Prompt the user to enter an integer
	printf("Please input a positive integer: ");
	// Scan the user input
	scanf("%d", &numberCap);

	while (nextFib < numberCap)
	{
		nextFib = fib1 + fib2;	// Add the previous 2 numbers to get the next one in the sequence
		fib1 = fib2;			// Set the first number to the second number
		fib2 = nextFib;			// Set the second number to the new one
		
		if (isEven(nextFib))	// Check to see if the number is even
		{
			sum += nextFib;		// Add that number to the sum
		}
	}

	// Display to the user the sum of the even numbers
	printf("The sum of the even Fibonacci numbers below %d, is %d\n", numberCap, sum);

	// Exit the program
	return 0;
}

// Function that determines if a number is even
int isEven(int number)
{
	int notEven = 0;	// No
	int even = 1;		// Yes

	// Check to see if the number is divisible by 2
	if (number % 2 == 0)
		return even;	// Yes, even
	else
		return notEven;	// No, not even
}