
/*
Lovee Baccus
September 10, 2018
CPTS 121 Fall
PA 2

Description: The re-organize PA 1 using methods and different .c files 

Before each method, we should prompt the user for input to be passed into the method. 
The method should return a value that will be printed.

*/

#include "PA2.h"

//Declaration Prototypes 

// 1. computeForce
double computeForce(double mass, double acc);
// 2. computeVolOfCyl
double computeVolOfCyl(double rad, double height);
// 3. encodeChar
char encodeChar(char plaintextChar, int shift);
// 4. computeDistance
double computeDistance(double x1, double y1, double x2, double y2);
// 5. computeTan
double computeTan(double theta);
// 6. computeParRes
double computeParRes(int r1, int r2, int r3);
// 7. computeGenEq
double computeGenEq(int a, double x, double y, double z);

void main(void) {
	// 1. computeForce
	double mass = 0.0, acc = 0.0;
	printf("Please enter the mass and acceleration for use in Newton's Second Law:");
	scanf("%lf %lf", &mass, &acc);
	printf("Force: %.2lf\n", computeForce(mass, acc));
	
	// 2. computeVolOfCyl
	double rad = 0.0, height = 0.0;
	printf("Please enter the radius and height for use in the volume of a cylinder: ");
	scanf("%lf %lf", &rad, &height);
	printf("Volume: %.2lf\n", computeVolOfCyl(rad, height));

	// 3. encodeChar
	char inputChar = '\0';
	int shiftNum = 0;
	printf("Please enter a character to encode, and a shift number: ");
	scanf(" %c%d", &inputChar, &shiftNum);
	printf("Encoded Character: %c\n", encodeChar(inputChar, shiftNum) );

	// 4. computeDistance
	double x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0, dis = 0.0;
	printf("Please enter two X and Y cooridnates in the form X Y X Y for use in the distance formula: ");
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	printf("Distance: %.2lf\n", computeDistance(x1,y1,x2,y2));

	// 5. computeTan
	double theta = 0.0;
	printf("Please enter a value for theta in radians for use in the tangent function: ");
	scanf("%lf", &theta);
	printf("Tangent of %.2lf: %.2lf\n", theta, computeTan(theta) );

	// 6. computeParRes
	int r1 = 0, r2 = 0, r3 = 0;
	printf("Please enter 3 values for use in Parallel Resistance: ");
	scanf("%d %d %d", &r1, &r2, &r3);
	printf("Parallel Resistance: %.2lf\n", computeParRes(r1,r2,r3) );

	// 7. computeGenEq y = (2/3) - y + z * x / (a % 2) + pi
	int a = 0;
	double x = 0.0, y = 0.0, z = 0.0;
	printf("*NOTE* If you put an even number in for a, you will be trying to divide by zero.\n");
	printf("Please enter a value for a for use in the General Equation: ");
	scanf("%d", &a);
	printf("Please enter values for x, y, and z for use in the General Equation: ");
	scanf("%lf%lf%lf", &x, &y, &z);
	printf("y = %.2lf\n", computeGenEq(a,x,y,z) );

}
