#include "main.h"

/**
* _pow_recursion - Returns the value of x raised to the power of y
* @x: main number
* @y: number of times to be multiplied
*
* Return: The result or -1 if y is less than 0
*/

int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
			return (1);

		return (_pow_recursion(x, y - 1) * x);
	}
	else
		return (-1);
}
