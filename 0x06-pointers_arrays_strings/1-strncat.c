#include "main.h"
#include <stdio.h>

/**
* _strncat - Concatenate two strings
* @dest: Destination
* @src: Source
* @n: Limit
*
* Return: Destination
*/

char *_strncat(char *dest, char *src, int n)
{
	int total1 = 0, total2 = 0, a = 0, b = 0, i = 0;
	char all[10000];

	while (dest[total1] != '\0')
	{
		all[a] = dest[total1];
		total++;
		a++;
	}
	
	while (total2 < n)
	{
		all[a] =  src[total2];
		total2++;
		a++;
	}

	while (all[b] != '\0')
	{
		dest[i] = all[a];
		a++;
		i++;
	}

	return (dest);
}
