#include "main.h"

/**
* main - Entry point
*
* Return: Always zero
*/
int main(void)
{
       int i;
       long c;

       printf("%ld, ", a);
       printf("%ld, ", b);

       for (i = 3; i <= 98; i++)
       {
       	       c = a + b;
               a = b;
               b = c;

               printf("%ld", c);

               if (i < 98)
                       printf(",");
               else
                       printf("\n");
	}

	return (0);
}
