#include <stdio.h>
#include "main.h"
/**
 * main - print string in reverse
 * @s: return value
 */
void print_rev(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)

	for (--n; n >= 0; --n)
		_putchar(s[n]);

	_putchar('\n');
}
