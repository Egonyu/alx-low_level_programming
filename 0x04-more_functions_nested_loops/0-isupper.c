#include "main.h"

/**
 *_isupper - program that checks uppercase character
 *
 *@c: character to be tested
 *
 *Return: Always 0 (Success)
 *
 *Return 1 if c is uppercase
 *
 *Return 0 if c is lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
