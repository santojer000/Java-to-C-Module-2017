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
	
	// Display to the student their grade
	if (myTestGrade == 'A' || myTestGrade == 'F')
		// For grammar purposes
		printf("A test score of %0.2lf%%, is an %c.\n", myTestScore, myTestGrade);
	else
		printf("A test score of %0.2lf%%, is a %c.\n", myTestScore, myTestGrade);
	
	// Tell student how they did on the test
	if (myTestGrade == 'A' || myTestGrade == 'B')
		printf("Good job!\n");
	else if (myTestGrade == 'C')
		printf("You can do better than that.\n");
	else
		printf("Better luck next time...\n");

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