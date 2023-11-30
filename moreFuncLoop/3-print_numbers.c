#include "main.h"
/*
 * print_number : prints value from 0 - 9
 *
 * return - null
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
