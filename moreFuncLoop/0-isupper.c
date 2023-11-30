#include "main.h"
/*
 * _isupper - checks if a letter 
 * is in caps or not 
 * @c: check variable 
 *
 * Return - 1 if upper case else 0
 */

int _isupper(int c)
{
	if(c >= 'A' && c <= 'Z')
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
