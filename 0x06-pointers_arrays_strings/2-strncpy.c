#include "main.h"

/**
* _strncpy - copies a string
* @src: Source
* @dest: Destination
* @n: Limit
*
* Return: Destination
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[a] != '\0')
		a++;

	while (b < n)
	{
		if (b < a)
			dest[b] = src[b];
		else
			dest[b] = '\0';
		b++;
	}

	return (dest);
}
