/*****************************************************************************
* Programmer:			  Jerome Santos										 *
* Class:				  Java --> C Module, 2017							 *
* Programming Assignment: LabTask3.3										 *
* Date:					  01/07/2017										 *
* Description:			  A Program designed to calculate the largest prime  *
*						  factor of a given number n.						 *
*****************************************************************************/

#include <stdio.h>

int isPrime(long number);
long greatestPrime(long number);

int main(void)
{
	long numberCap = 0;		// Number cap determined by the user
	long GPF = 0;			// Greatest prime factor (GPF)

	// Prompt the user to enter an integer
	printf("Please enter a positive integer: ");
	// Scan the users input
	scanf("%ld", &numberCap);

	// Calculate the greatest prime factor
	GPF = greatestPrime(numberCap);

	// Display the result to the user
	printf("The greatest prime factor of %ld, is %ld\n", numberCap, GPF);

	// Exit the program
	return 0;
}

// Function that determines if a number is a prime number
int isPrime(long number)
{
	int yesPrime = 1;
	int noPrime = 0;

	if (number < 2)			// Smallest prime factor is 2
		return noPrime;
	if (number == 2)
		return yesPrime;
	if (number % 2 == 0)	// Any number that is divisible by 2 is not prime
		return noPrime;
	for (int i = 3; i * i <= number; i += 2)
	{
		if (number % i == 0)
			return noPrime;
	}
	return yesPrime;
}

// Function that calculates the greatest prime factor of the given number
long greatestPrime(long number)
{
	long prime = 2;
	for (int i = 2; i < number; i++)
	{
		// Check to see if the number is prime
		if (isPrime(i))
		{
			// Check to see if the prime divides the number evenly
			if (number % i == 0)
				prime = i;
		}
	}
	return prime;
}