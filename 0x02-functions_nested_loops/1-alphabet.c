#include "main.h"
/**
 * main - Print alphabet in lowercase
 * Return: 0 Always
 */

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar("\n");
}
