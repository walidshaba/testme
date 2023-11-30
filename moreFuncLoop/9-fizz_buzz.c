#include "stdio.h"

/* main - prints number from 1 - 100
 * when there is a multiple of 3 
 * fizz should be printed and for 5 
 * multiple buzz, and both fizzbuzz
 * Return : Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <=100; i++)
	{
		if(i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if(i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		}
		else if(i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
}
