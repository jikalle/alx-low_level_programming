#include "main.h"

/**
 * _strcpy - copy str to another string
 * @dest: pointer
 * @src: pointe
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;
	int b = 0;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[b] = src[a];
		b++;
	}
	dest[b] = '\0';

	return (dest);
}
