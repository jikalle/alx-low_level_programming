#include "main.h"
/**
 * _strspn - return length that matches values consistent
 * @s: string to search
 * @accept: target matches
 * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept)
{
int i = 0; j;
int matches = 0;

while (s[i] != '\0')/*iterate through string*/
{

for (j = 0; accept[j] != '\0'; j++)/*iterate via target*/
{
if (s[i] == accept[j])/*recored & break at first match*/
{
matches++;
break;
}
if (accept[j + 1] == '\0' && s[i] != accept[j])
return (matches);/*return if idx doesn't match*/
}
i++;
}
return (matches);/*return no if all match to end*/

}
