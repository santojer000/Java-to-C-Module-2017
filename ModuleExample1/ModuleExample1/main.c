/***************************************************************************************
* Programmer:		  Jerome Santos													   *
* Class:			  Java --> C Module, 2017									       *
* Program Assignment: Example #1													   *
* Date:				  01/01/2017													   *
* Description:		  (Coinstar machine)											   *
*					  This program will take an amount of coins, and give the	       *
*					  sum of all the coins in dollars.						           *
***************************************************************************************/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char first = '\0';			// First initial
	char middle = '\0';			// Middle initial
	char last = '\0';			// Last initial

	int quarters = 0;			// Number of quarters
	int dimes = 0;				// Number of dimes
	int nickels = 0;			// Number of nickels
	int pennies = 0;			// Number of pennies

	int total_Cents = 0;		// The total in cents
	double total_Dollars = 0.0;	// The total in dollars $$$
	
	// Ask the customer for their initials
	printf("Hello, what are your initials?\n");
	// Take the customer initial inputs
	scanf(" %c %c %c", &first, &middle, &last);
	
	printf("Welcome %c%c%c! Please insert your coins:\n", first, middle, last);

	printf("Please insert how many quarters ($0.25) you have: ");
	scanf(" %d", &quarters);	// Stores the amount of quarters the customer has

	printf("Please insert how many dimes ($0.10) you have: ");
	scanf(" %d", &dimes);		// Stores the amount of dimes the customer has

	printf("Please insert how many nickels ($0.05) you have: ");
	scanf(" %d", &nickels);		// Stores the amount of nickels the customer has

	printf("Please insert how many pennies ($0.01) you have: ");
	scanf(" %d", &pennies);		// Stores the amount of pennies the customer has

	// Calculating the total cents the customer has based on theit input
	total_Cents = pennies + (5 * nickels) + (10 * dimes) + (25 * quarters);

	// Convert total cents to dollars $$$
	total_Dollars = (double) total_Cents / 100;	// because there are 100 cents in 1 dollar

	// Display the total to the customer
	printf("You have a total of $%0.2lf\n", total_Dollars);

	// Exits the program
	return 0;
}