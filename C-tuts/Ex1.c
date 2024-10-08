#include <stdio.h>
/* Program to print sum of 2 integers */

int main()
{
	/* Print a descriptive header for the program */
	printf("\n============== SUM OF TWO INTEGERS =============\n");

	/*Declare two variables for storing user inputs*/
	int firstNumber, secondNumber;

	/* Prompt the user to enter the first integer */
	printf("\nEnter the first integer: ");
	scanf("%d", &firstNumber);

	 /* Prompt the user to enter the first integer */
        printf("\nEnter the second integer: ");
        scanf("%d", &secondNumber);

	 /* Calculate the sum of the two integers */
	int sum = firstNumber + secondNumber;

	/* Display the results in a clear format */
	printf("\nThe sum of %d and %d is: %d\n\n", firstNumber, secondNumber, sum);

	return 0;
}
