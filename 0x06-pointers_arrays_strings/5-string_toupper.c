#include "main.h"

/**
* string_toupper - Changes lower case to uppercase* @a: String
*
* Return: String
*/

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] -= 32;
		}
	}

	return (a);
}
