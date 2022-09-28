#include "main.h"
#include <stdio.h>

/**
* _strlen_recursion - Return the lenght of a string
*
* @s: string
*
* Return: void
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')

return (0);
s++;
return (1 + _strlen_recursion(s));
}
