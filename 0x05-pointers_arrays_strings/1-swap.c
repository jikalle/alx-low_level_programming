#include <stdio.h>
#include "main.h"
/**
 * swap_int - swap to interger's value
 * @a: takes the value of 98
 * @b: takes the value of 42
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
