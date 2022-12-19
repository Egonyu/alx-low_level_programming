#include "dan.h"

/**
 *print_rev -  program to print in reverse followed by a new line
 *@s: pointer to the string
 *Return: void
 */

void print_rev(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	print_rev(s + 1);

	_putchar(*s);
}

