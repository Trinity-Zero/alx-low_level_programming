#include <stdio.h>

/**
* main - Entry point
* @argv: Argument vector
* @argc: Argument count
*
* Return: Always Zero
*/

int maim(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
