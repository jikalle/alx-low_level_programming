#include "main.h"
#include <stdio.h>

/**
 * print_square - print a box of given size with #
 * @size: size of the box you need to print out:
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
