#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: Argument count
* @argv: Argument vector
*
* Return: Always zero
*/

int main(int argc, int *argv[])
{
	int a = 0, b = 0, mul = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;

		printf("%d\n", mul);
	}
	else
		prinf("Error\n");

	return (0);
}
