#inlcude "main.h"

/**
 *_isdigit - program to check for a digit
 *
 *@c: digit to be checked
 *
 *Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
