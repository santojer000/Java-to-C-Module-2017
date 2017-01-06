/***************************************************************************************
* Programmer:		  Jerome Santos													   *
* Class:			  Java --> C Module, 2017									       *
* Program Assignment: Example #1													   *
* Date:				  created--01/01/2017											   *
*					  updated--01/05/2017											   *
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

	FILE *coinInputs = NULL;	// File where we will read the coins from
	FILE *dollarOutput = NULL;	// File where we will store the total amount in dollars

	coinInputs = fopen("coinCount.txt", "r");	// Opens the file for reading
	dollarOutput = fopen("dollars.txt", "w");	// Opens the file for writing

	// Ask the customer for their initials
	printf("Hello, what are your initials?\n___\b\b\b");
	// Take the customer initial inputs
	scanf(" %c %c %c", &first, &middle, &last);

	printf("\nWelcome %c%c%c! Please insert your coins.\n\n", first, middle, last);

	printf("\tRetrieving coins from input file...\n\n");
	fscanf(coinInputs, "%d%d%d%d", &quarters, &dimes, &nickels, &pennies);	// Reads in the coin inputs

	// Display to the customer what numbers were read in
	printf("You have %d Quarters, %d Dimes, %d nickels and %d pennies.\n\n", quarters, dimes, nickels, pennies);

	// Calculating the total cents the customer has based on theit input
	total_Cents = pennies + (5 * nickels) + (10 * dimes) + (25 * quarters);

	// Convert total cents to dollars $$$
	total_Dollars = (double)total_Cents / 100;	// because there are 100 cents in 1 dollar

	// Display the total to the customer
	printf("You have a total of $%0.2lf\n\n", total_Dollars);
	// Write the total to the dollarOutput file
	fprintf(dollarOutput, "Customer: %c%c%c, Total: $%0.2lf\n", first, middle, last, total_Dollars);

	fclose(coinInputs);		// Closes the file
	fclose(dollarOutput);	// Closes the file

	return 0;	// Exits the program
}