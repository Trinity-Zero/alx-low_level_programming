#include "main.h"

/**
* main - Entry point
*
* Return: Always zero
*/
int main(void)
{
       int i;

       for (i = 3; i <= 98; i++)
       {

               if (i < 98)
                       printf(",");
               else
                       printf("\n");
	}

	return (0);
}
