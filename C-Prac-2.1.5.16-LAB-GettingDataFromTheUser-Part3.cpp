//Scenario
//Write a program that asks the user for a day and month(separate integer values for both).Next, it should print the day number of the year for the given day and month.
//Assume that the year is a leap year(February has 29 days).Your program must print the same result as the expected output.
//Test the program for days of different months.Assume that the user input is valid.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Sample Input
//1
//1
//
//Sample output
//The day of the year : 1
//
//Sample Input
//31
//1
//
//Sample output
//The day of the year : 31
//
//Sample Input
//29
//2
//
//Sample output
//The day of the year : 60
//
//Sample Input
//31
//12
//
//Sample output
//The day of the year : 366
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main() {
	int v1, v2;
	printf("Enter the days: ");
	scanf_s("%d", &v1);
	printf("Enter the months: ");
	scanf_s("%d", &v2);
	if (v2 == 1) v2 = 0;
	else if (v2 == 2) v2 = 31;
	else if (v2 == 3) v2 = 60;
	else if (v2 == 4) v2 = 91;
	else if (v2 == 5) v2 = 121;
	else if (v2 == 6) v2 = 152;
	else if (v2 == 7) v2 = 182;
	else if (v2 == 8) v2 = 213;
	else if (v2 == 9) v2 = 244;
	else if (v2 == 10) v2 = 274;
	else if (v2 == 11) v2 = 305;
	else if (v2 == 12) v2 = 335;
	printf("The day of the year: %d", v1 + v2);	
}