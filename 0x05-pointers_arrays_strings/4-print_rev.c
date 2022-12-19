#include "dan.h"

/**
 *print_rev -  program to print in reverse followed by a new line
 *@s: pointer to the string
 *Return: void
 */

void print_rev(char *s)
{
	int strlen = _strlen(s);

	for (int i = strlen - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
