#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _puts - prints the string
 * @str: string to print
 *
 * Return: 0
 */

void _puts(char *str)
{
	while(*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
