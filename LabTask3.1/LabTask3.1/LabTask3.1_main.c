/*****************************************************************************
* Programmer:			  Jerome Santos										 *
* Class:				  Java --> C Module, 2017							 *
* Programming Assignment: LabTask3.1										 *
* Date:					  01/07/2017										 *
* Description:			  A program designed to calculate the sum of all the *
*						  multiples of 3 and 5 below a number n.			 *
*****************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define THREE 3
#define FIVE 5

int calculateSum(int input);

int main(void)
{
	int number = 0;		// Number the user will input
	int total = 0;		// Total sum of all the numbers that are multiples of 3 OR 5 

						// Prompt the user to enter a number
	printf("Please enter a positive integer: ");
	// Scan the users input
	scanf("%d", &number);

	// Calculate the sum
	total = calculateSum(number);
	// Display to the user the sum
	printf("The sum of the multiples of 3 or 5 that are below %d is %d\n", number, total);

	// End the program
	return 0;
}

/* Function that calculates the sum of all of the integers below a given
number, that are divisible by 3 OR 5 */
int calculateSum(int input)
{
	int sum = 0;		// The sum of the multpiles of 3 OR 5
	for (int i = 0; i < input; i++)
	{
		// Check to see if the number is divisible by 3 or 5
		if (i % THREE == 0 || i % FIVE == 0)
		{
			// Add the number to the existing
			sum += i;
		}
	}
	return sum;
}