#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _puts - prints the string
 * @str: string to print
 *
 * Return: 0
 */
int _puts(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		if (*(str + count) != '"')
			_putchar(*(str + count));
	count++;
	}
	_putchar('\n');
}
