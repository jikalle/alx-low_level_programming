#include <stdio.h>
#include "main.h"
/**
 * _isdigit - check wether digit is number of none
 * Return: 1 if c is digit, else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
