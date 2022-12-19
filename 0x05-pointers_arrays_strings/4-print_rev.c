#include "dan.h"

/**
 *print_rev -  program to print in reverse followed by a new line
 *@s: pointer to the string
 *Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}

