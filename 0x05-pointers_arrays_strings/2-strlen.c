#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to returns its length
 * @len - the returned value of the string
 * Return: the length of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}

	return (count);
}
