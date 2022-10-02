#include "main.h"

/**
* rot13 - Encodes a string using rot13
* @s: String
*
* Return: Encoded string
*/

char *rot13(char *s)
{
	int i, j;



	for (j = 0; s[j] != '\0'; j++)
	{
		i = 0;
		while (rotA[i] != '\0' && s[j] != rotA[i])
			i++;
		if (s[j] == rotA[i])
			s[j] == rotB[i];
	}

	return (s);
}
