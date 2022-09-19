#include "main.h"
#include <stdio.h>

/**
* _atoi - Converts a string to an integer
* @s: String
*
* Return: The integer
*/

int _atoi(char *s)
{
	int sign = 1;
	unsigned int total = 0;
	char check = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		if (*s >= '0' && *s <= '9')
		{
			check = 1;
			total = total * 10 + *s - '0';
		}
		else if (*s < '0' || *s >= '9')
		{
		if (check)
			break;
		}
		s++;
	}
	if (sign < 0)
		total = (-(total));
	return (total);
}
