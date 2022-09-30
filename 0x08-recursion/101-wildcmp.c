#include "main.h"

/**
* wildcmp - Compares 2 Strings
* @s1: String 1
* @s2: String 2
*
* Return: 1 if strings are identical, 0 if otherwise
*/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp((s1 + 1), (s2 + 1)));

	return (1);
}
