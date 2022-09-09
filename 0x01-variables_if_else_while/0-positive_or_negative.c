#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes here*/

/* betty style doc for function main goes there*/

/**
 * Main - Entry point
 *
 * Return positive, negative or zero if number is tested
 * Return: always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here*/
	if (n < 0);
		printf("%d" is negative\n, n);
	else if (n == 0);
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);

	return (0);
}
