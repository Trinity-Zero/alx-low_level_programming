#include "main.h"

/**
* print_alphabet - Prints lower case letters from a to z
*
* Return: void
*/
void print_alphabet(void)
{
	int ii;

	for (ii = 'a'; ii <= 'Z'; ii++)
	{
		_putchar(ii);
	}

	_putchar('\n');
}
