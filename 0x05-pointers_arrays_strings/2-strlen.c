#include "dan.h"

/**
 *int _strlen - program that return legnth of a string
 *@s: string to be measured
 *Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;

		s++;
	}

	return (length);
}
