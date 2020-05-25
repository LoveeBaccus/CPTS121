/*
Lovee Baccus
9/16/18
PA 3
Description:
Write a program that processes numbers, corresponding to student records
read in from a file, and writes the required results to an output file

takes five students' information and displays the averages, with some other 
good info
*/

#include "PA3.h"

//Function Definitions

/*
double readDouble(FILE *infile)
Reads one double precision number from the input file. 
Note: You may assume that the file only contains real numbers.
*/
double readDouble(FILE *infile) {
	double temp = 0.0;
	fscanf(infile,"%lf", &temp);
	return temp;
}

int readInt(FILE *infile) {
	int temp = 0;
	fscanf(infile, "%d", &temp);
	return temp;
}

/*
double calculate_sum 
(double number1, double number2, double number3, double number4, double number5) 
Finds the sum of number1, number2, number3, number4, and number5 and returns the result.
*/
double calculate_sum(double n1, double n2, double n3, double n4, double n5) {
	return n1 + n2 + n3 + n4 + n5;
}

/*
double calculate_mean (double sum, int number)
Determines the mean through the calculation sum / number and returns the result. 
You need to check to make sure that number is not 0. If it is 0 the function returns
-1.0 (we will assume that we are calculating the mean of positive numbers), 
otherwise it returns the mean.
*/
double calculate_mean(double sum, int number) {
	return sum / number;
}

/*
double calculate_deviation (double number, double mean)
Determines the deviation of number from the mean and returns the result. 
The deviation may be calculated as number - mean.
*/
double calculate_deviation(double number, double mean) {
	return (number - mean);
}

/*
double calculate_variance (double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number)
Determines the variance through the calculation:
((deviation1)^2 + (deviation2)^2 + (deviation3)^2 + (deviation4)^2 + (deviation5)^2) / number
and returns the result. Hint: you may call your calculate_mean ( ) function to determine the result!
*/
double calculate_variance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number) {
	double sum = pow(deviation1, 2) + pow(deviation2, 2) + pow(deviation3, 2) + pow(deviation4, 2) + pow(deviation5, 2);
	return calculate_mean(sum, number);
}

/*
double calculate_standard_deviation (double variance)
Calculates the standard deviation as sqrt (variance) and returns the result. 
Recall that you may use the sqrt ( ) function that is found in math.h.
*/
double calculate_standard_deviation(double variance) {
	return sqrt(variance);
}

/*
double find_max (double number1, double number2, double number3, double number4, double number5)
Determines the maximum number out of the five input parameters passed into the function, returning the max.
*/
double find_max(double n1, double n2, double n3, double n4, double n5) {
	double max = n1;
	if (max < n2) {
		max = n2;
	}
	if (max < n3) {
		max = n3;
	}
	if (max < n4) {
		max = n4;
	}
	if (max < n5) {
		max = n5;
	}
	return max;
}

/*
double find_min (double number1, double number2, double number3, double number4, double number5)
Determines the minimum number out of the five input parameters passed into the function, returning the min.
*/
double find_min(double n1, double n2, double n3, double n4, double n5) {
	double min = n1;
	if (min > n2) {
		min = n2;
	}
	if (min > n3) {
		min = n3;
	}
	if (min > n4) {
		min = n4;
	}
	if (min > n5) {
		min = n5;
	}
}

/*
void print_double (FILE *outfile, double number) — Prints a double precision number (to the hundredths place) to an output file.
*/
void print_double(FILE *outfile, double number) {
	outfile = fopen("outputData.dat", "w");
	fprintf(outfile, "%.lfd\n", number);
}