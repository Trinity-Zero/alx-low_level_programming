#include "main.h"

/**
* _isalpha - Function to check for alphabetic character
* @c: character to check
*
* Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
