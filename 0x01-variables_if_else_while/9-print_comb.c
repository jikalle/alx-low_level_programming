#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - puts project to print all combinations of single digits
 * Description: The project print all combinationsl of single-digit
 * Return 0
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
	putchar(number + '0');
	if (number < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
