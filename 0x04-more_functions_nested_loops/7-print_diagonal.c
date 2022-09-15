#include "main.h"

/**
* print_diagonal - Draws a diagonal line on the terminal
* @n: The number of times to print diagonal lines
*
* Return: empty
*/
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				_putchar(32);
			}

			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
