#include "main.h"
/**
 *_strncat - function that concatenates two strings. it will be use
 * at most n bytes from src. src does not need to be null terimnated
 *@dest: pointer to destination string.
 *@src: pointer to source string
 *@n: number of bytes to be concatenate.
 *
 * Return: pointer to destingation string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, j;
/* j is a counter for n bytes of src to be concatenate*/
/* length = length of destination string*/

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
