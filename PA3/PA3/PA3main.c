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

//Function Declarations
double readDouble(FILE *infile);
double calculate_sum(double n1, double n2, double n3, double n4, double n5);
double calculate_mean(double sum, int number);
double calculate_deviation(double number, double mean);
double calculate_variance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number);
double calculate_standard_deviation(double variance);
double find_max(double n1, double n2, double n3, double n4, double n5);
double find_min(double n1, double n2, double n3, double n4, double n5);

//MAIN
void main(void) {
	FILE *infile = NULL;
	FILE *outfile = NULL;
	infile = fopen("studentInfo.dat", "r");

	
	int student1ID = 0, student2ID = 0, student3ID = 0, student4ID = 0, student5ID = 0;
	double student1GPA = 0, student2GPA = 0, student3GPA = 0, student4GPA = 0, student5GPA = 0;
	int student1Standing = 0, student2Standing = 0, student3Standing = 0, student4Standing = 0, student5Standing = 0;
	double student1Age = 0, student2Age = 0, student3Age = 0, student4Age = 0, student5Age = 0;

	//I feel like this should be a loop or something

	//Student 1
	student1ID = readInt(infile);
	student1GPA = readDouble(infile);
	student1Standing = readInt(infile);
	student1Age = readDouble(infile);

	//Student 2
	student2ID = readInt(infile);
	student2GPA = readDouble(infile);
	student2Standing = readInt(infile);
	student2Age = readDouble(infile);

	//Student 3
	student3ID = readInt(infile);
	student3GPA = readDouble(infile);
	student3Standing = readInt(infile);
	student3Age = readDouble(infile);

	//Student 4
	student4ID = readInt(infile);
	student4GPA = readDouble(infile);
	student4Standing = readInt(infile);
	student4Age = readDouble(infile);

	//Studetn 5
	student5ID = readInt(infile);
	student5GPA = readDouble(infile);
	student5Standing = readInt(infile);
	student5Age = readDouble(infile);

	fclose(infile);

//GPA Mean
	double GPA_sum = calculate_sum(student1GPA, student2GPA, student3GPA, student4GPA, student5GPA);
	double GPA_mean = calculate_mean(GPA_sum, numOfStudents);
	//write GPA Mean to file
	print_double(outfile, GPA_mean);

//Class Standing Mean
	double class_sum = calculate_sum(student1Standing, student2Standing, student3Standing, student4Standing, student5Standing);
	double class_mean = calculate_mean(class_sum, numOfStudents);
	//write Class mean to file
	print_double(outfile, class_mean);

//Age Mean
	double age_sum = calculate_sum(student1Age, student2Age, student3Age, student4Age, student5Age);
	double age_mean = calculate_mean(age_sum, numOfStudents);
	//write age mean to file
	print_double(outfile, age_mean);

//GPA Standard Deviation

	//Find the variation for each Students' GPA?

//	double GPA_deviation = calculate_deviation(numOfStudents,);
	//write deviation to file

//GPA Min
	double GPA_min = find_min(student1GPA, student2GPA,student3GPA,student4GPA,student5GPA);
	//write min to file
	print_double(outfile, GPA_min);

//GPA Max
	double GPA_max = find_max(student1GPA, student2GPA, student3GPA, student4GPA, student5GPA);
	print_double(outfile, GPA_max);
}