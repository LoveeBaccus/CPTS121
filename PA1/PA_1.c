/*
Name: Lovee Baccus
Class: CPTS 121 Fall
Date: 08/31/18
Assignment: PA 1
Description: To practice using math opperators and such, we will use a variety of equations with 
	input from the user. 
*/

#include <stdio.h>
int main(void) {
	// 1. Newton's Second Law of Motion
	double mass = 0.0, acc = 0.0;
	printf("Please enter the mass and acceleration for use in Newton's Second Law:");
	scanf("%lf %lf", &mass, &acc);
	//calculate and display force
	printf("Force = %lf\n", (mass * acc));

	// 2. Volume of a Cylinder
	double pi = 3.14, rad = 0.0, height = 0.0;
	printf("Please enter the radius and height for use in the volume of a cylinder: ");
	scanf("%lf %lf", &rad, &height);
	//calculate and display volume
	printf("Volume: %lf \n", (pi*rad*rad*height));

	// 3. Character Encoding
	// 4. Distance Formula
	double x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0;


	// 5. Tangent
	double theta = 0.0;

	// 6. Equivalent Parallel Resistance
	// 7. General Equation y = (2/3) - y + z * x / (a % 2) + pi
}