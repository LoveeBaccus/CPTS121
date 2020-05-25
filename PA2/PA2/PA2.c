
#include "PA2.h"

//Method Definitions

// 1. computeForce
/*
returns a double, takes parameters mass and acceleration
multiplies them together for the force output
*/
double computeForce(double mass, double acc) {
	return mass * acc;
}

// 2. computeVolOfCyl
/*
returns a double, takes parameters of the radius and height of cylinder
*/
double computeVolOfCyl(double rad, double height) {
	return (PI*pow(rad, 2)*height);
}

// 3. encodeChar
/*
encodes a char and shifts it however much you tell it to in ACII
*/
char encodeChar(char plaintextChar, int shift) {
	return plaintextChar - 'A' + 'a' - shift;
}

// 4. computeDistance
/*
takes two points and finds the distance between them
*/
double computeDistance(double x1, double y1, double x2, double y2) {
	return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}

// 5. computeTan
/*
computes tangent by using sin over cos and passes in theta 
*/
double computeTan(double theta) {
	return (sin(theta) / cos(theta));
}

// 6. computeParRes
/*
finds the parrallel resistance of three numbers, and returns a double
*/
double computeParRes(int r1, int r2, int r3) {
	return (double)1 / (1 / r1 + 1 / r2 + 1 / r3);
}

// 7. computeGenEq
/*
takes a defined equation, asks for inputs, and computes the value.
*/
double computeGenEq(int a, double x, double y, double z) {
	return (double)(2.0 / 3.0) - y + z * x / (a % 2) + PI;
}