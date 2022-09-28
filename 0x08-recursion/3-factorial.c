#include "main.h"

/**
* factorial - Returns the factorial of a number
* @n: number
*
* Return: the factorial or -1 if n less than 0
*/

int factorial(int n)
{
	if (n >= 0)
	{
		if (n == 0, n == 1)
		{
			return (1);
		}
		else
		{
			return (n * factorial(n - 1));
		}
	}
	else
		return (-1);
}
