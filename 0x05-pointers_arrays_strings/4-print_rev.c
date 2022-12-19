#include "dan.h"

/**
 *print_rev -  program to print in reverse followed by a new line
 *@s: pointer to the string
 *Return: void
 */

void print_rev(char *s)
{
    // find the length of the string
    int length = _strlen(s);

    // print the characters of the string in reverse order
    for (int i = length - 1; i >= 0; i--)
    {
        putchar(s[i]);
    }

    // print a newline character
    putchar('\n');
}

