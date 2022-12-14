#include "main.h"
#include <stdio.h>

/**
* _strcmp - Compares two strings
* @s1: String 1
* @s2: String 2
*
* Return: Differences
*/

int _strcmp(char *s1, char *s2)
{
	int a;
	int diff = 0;

	for (a = 0; s1[a] != '\0'; a++)
	{
		if (s1[a] == s2[a])
		{
			continue;
		}
		else
		{
			if (s2[a] != '\0')
			{
				diff = s1[a] - s2[a];
				break;
			}
		}
	}

	return (diff);
}
