#include "main.h"
/**
 * print_alphabet_x10 ->  alphabet in lowercase
 * Return: 0 Always
 */
int print_alphabet_x10(void)
{
	int j; i;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');

	}
}
