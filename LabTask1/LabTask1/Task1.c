/*****************************************************************************
* Programmer:			  Jerome Santos										 *
* Class:				  Java --> C Module, 2017							 *
* Programming Assignment: Lab1Task1											 *
* Date:					  01/01/2017										 *
* Description:			  A program designed to predict the amount of power	 *
						  produced if 90% of the work done on the water in a *
						  hydroelectric dam is converted to electrical energy*
						  given the height of the dam, as well as the flow   *
						  rate of the water.								 *
						  Relevent formulas:								 *
						  - Power = work / time								 *
						  - Work = mass * gravity * height					 *
						  - Gravitational constant = 9.80 meters/seconds^2   *
*****************************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define GRAVITY 9.80;
#define EFFICIENCY 0.90;

int main(void)
{
	int height = 0;				// Height of the dam (m)
	int mass = 0;				// Mass of the water (kg)
	double flow_rate = 0.0;		// Flow rate of the water (m^3/s)
	double power = 0.0;			// Power produced (MW)
	double work = 0.0;			// Work produced (j)
	double time = 0.0;			// amount of time (s)
	
	// Prompt the user to input the height of the dam (in meters)
	printf("Please enter the height of the dam (in meters): ");
	scanf("%d", &height);

	// Prompt the user to input the flow rate of the water (in cubic meters per second)
	printf("Please enter the flow rate of the water (in cubic meters per second): ");
	scanf("%lf", &flow_rate);

	// Calculate the mass of the water
	mass = flow_rate * 1000;	// 1 cubic meter = 1000 kg

	// Calculate the work
	work = (double) mass * (double) height * GRAVITY;

	// Calculate power
	power = work * EFFICIENCY;
	power /= 1000000;			// 1 MW = 10^6 W

	// Display the results to the user
	printf("The amount of power produced by this dam is %0.2lf MW\n", power);

	return 0;
}