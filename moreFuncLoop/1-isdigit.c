#include "main.h"

/*
 * _isdigit - check if inputed number is a digit 
 *
 * @c: value to be tested
 * Return: 1 if it is a digit else 0
 */

int _isdigit(int c)
{
	if(c >= '0' && c <= '9')
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
