#include "main.h"

/*
 * void print_rev - Print a string in reverse
 * then a new  linw 
 * @*s : the value to be inputed
 */

void print_rev(char *s)
{
	int longi = 0;
        int o;

        while (*s != '\0')
        {
                longi++;
                s++;
        }
        s--;
        for (o = longi; o > 0; o--)
        {
                _putchar(*s);
                s--;
        }
        _putchar('\n');
}
