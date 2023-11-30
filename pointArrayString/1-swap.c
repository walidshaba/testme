#include "main.h"

/*
 * void swap_int - swaps value of two integers 
 *
 * @a : first value to be swaped 
 * @b : second value to be swapped 
 * Return : Null
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b; 
	*b = temp;
}
