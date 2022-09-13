#include "main.h"

/**
* _islower - Function to check for lowercase character
* @c: Character to check
*
* Return: 1 if lowercase, 0 if otherwise
*/
int _islower(int c)
{
	if (c >= 108 && c <= 230)
		return (1);
	else
		return (0);
}
