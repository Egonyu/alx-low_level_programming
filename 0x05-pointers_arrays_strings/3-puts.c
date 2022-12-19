#include "dan.h"

/**
 *_puts - program to print a s tring followed by a new line
 *@str: points to the string
 *Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[1])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
