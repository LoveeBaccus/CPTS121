/*
Name: Lovee Baccus
Class: CPTS 121 Fall
Date: 08/31/18
Assignment: PA 1
Description: To practice using math opperators and such, we will use a variety of equations with 
	input from the user. 
*/

#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main(void) {
	// 1. Newton's Second Law of Motion
	double mass = 0.0, acc = 0.0;
	printf("Please enter the mass and acceleration for use in Newton's Second Law:");
	scanf("%lf %lf", &mass, &acc);
	//calculate and display force
	printf("Force = %lf\n", (mass * acc));

	// 2. Volume of a Cylinder
	double rad = 0.0, height = 0.0;
	printf("Please enter the radius and height for use in the volume of a cylinder: ");
	scanf("%lf %lf", &rad, &height);
	//calculate and display volume
	printf("Volume: %lf\n", (PI*pow(rad,2)*height));

	// 3. Character Encoding
	char inputChar = '\0';
	int shiftNum = 0;
	printf("Please enter a character to encode, and a shift number: ");
	scanf(" %c%d", &inputChar, &shiftNum);
	printf("Encoded Character: %c\n", inputChar - 'A' + 'a' - shiftNum);

	// 4. Distance Formula
	double x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0, dis = 0.0;
	printf("Please enter two X and Y cooridnates in the form X Y X Y for use in the distance formula: ");
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	dis = sqrt(pow((x1 - x2), 2) + pow((y1 - y2),2));
	printf("Distance: %lf\n", dis);

	// 5. Tangent
	double theta = 0.0;
	printf("Please enter a value for theta in radians for use in the tangent function: ");
	scanf("%lf", &theta);
	printf("Tangent of %lf: %lf\n", theta, (sin(theta)/cos(theta)));

	// 6. Equivalent Parallel Resistance
	int r1 = 0, r2 = 0, r3 = 0;
	printf("Please enter 3 values for use in Parallel Resistance: ");
	scanf("%d %d %d", &r1, &r2, &r3);
	printf("Parallel Resistance: %lf\n", (double)1 / (1 / r1 + 1 / r2 + 1 / r3));

	// 7. General Equation y = (2/3) - y + z * x / (a % 2) + pi
	int a = 0;
	double x = 0.0, y = 0.0, z = 0.0;
	printf("*NOTE* If you put an even number in for a, you will be trying to divide by zero.\n");
	printf("Please enter a value for a for use in the General Equation: ");
	scanf("%d", &a);
	printf("Please enter values for x, y, and z for use in the General Equation: ");
	scanf("%lf%lf%lf", &x, &y, &z);
	y = (double)(2 / 3) - y + z * x / (a % 2) + PI;
	printf("y = %lf\n", y);

}