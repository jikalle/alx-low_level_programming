#include <stdio.h>
#include "main.h"
/**
 * swap - swap to interger's value
 * @a: takes the value of 98
 * @b: takes the value of 42
 * Return: void
 */
void swap(int a, int b)
{
	int a;
	int b;

	a = 98;
	b = 42;

	swap(a, b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}
