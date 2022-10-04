#include "main.h"
#include <stdlib.h>

/**
* _strdup - Returns a pointer to a newly allocated space in the memory
* @str: String
*
* Return: Pointer or NULL if string is empty
*/

char *_strdup(char *str)
{
	int i = 0, length = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	ptr = malloc(sizeof(char) * (length + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}
