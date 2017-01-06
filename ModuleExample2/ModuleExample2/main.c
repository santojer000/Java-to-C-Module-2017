/***************************************************************************************
* Programmer:		  Jerome Santos													   *
* Class:			  Java --> C Module, 2017									       *
* Program Assignment: Example #2													   *
* Date:				  created--01/05/2017											   *
*					  updated--01/05/2017											   *
* Description:		  (Student Grades)										           *
*					  A program that displays a students grade based on their raw score*
***************************************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char computeGrade(double studentScore);
void displayMessage(char letterGrade);

int main(void)
{
	double myTestScore = 0.0;
	char myTestGrade = '\0';

	// Prompt the user to enter their test score
	printf("What did you score on the test? ");
	// Scan their score input
	scanf("%lf", &myTestScore);

	// Call the computeGrade function
	myTestGrade = computeGrade(myTestScore);
	
	// Tell student how they did on the test
	/*if (myTestGrade == 'A' || myTestGrade == 'B')
		printf("Good job!\n");
	else if (myTestGrade == 'C')
		printf("You can do better than that.\n");
	else
		printf("Better luck next time...\n");*/

	// Call the displayMessage function to display the students grade
	displayMessage(myTestGrade);

	// Close the program
	return 0;
}

// A funtion that computes letter grades based on 100
char computeGrade(double studentScore)
{
	char letterGrade = '\0';

	if (studentScore >= 90.00)
		letterGrade = 'A';
	else if (studentScore >= 80.00)
		letterGrade = 'B';
	else if (studentScore >= 70.00)
		letterGrade = 'C';
	else if (studentScore >= 60.00)
		letterGrade = 'D';
	else
		letterGrade = 'F';

	return letterGrade;
}

// A function that displays a message based on the grade recieved
void displayMessage(char letterGrade)
{
	// Display to the student their grade
	if (letterGrade == 'A' || letterGrade == 'F')
		// For grammar purposes
		printf("Your grade is an %c.\n", letterGrade);
	else
		printf("Your grade is a %c.\n", letterGrade);

	switch (letterGrade)
	{
		case 'A':
		case 'B':
			printf("Good job!\n");
			break;
		case 'C':
			printf("You can do better than that.\n");
			break;
		case 'D':
			printf("Better luck next time...\n");
			break;
		case 'F':
			printf("Improvement needed! Please contact your instuctor.\n");
			break;
		default:
			printf("\nERROR: Invalid letter grade (%c) supplied!\n", letterGrade);
	}
}