#include "main.h"

/**
 * print_square - print a box of given size with #
 * @size: size of the box you need to print out:
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; ++j)
	{
		for (j = 0; j < size; ++j)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
