#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints opcodes of main function
* @argc: Argument count
* @argv: Argument vector
*
* Return: Always zero
*/

int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; 1 < n; i++)
	{
		printf("%.2hhx", opc[i]);
		if (i < n - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
