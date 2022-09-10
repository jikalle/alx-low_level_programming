#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	rand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here*/
	if (n > 0);
		printf("%d is positivee\n", n);
	else if (n == 0);
		printf("%d is zero\n", n);
	else
		printf("%d is else\n", n);
	return (0);
}
