#include <stdio.h>

/**
 *main - Program to print alphabt excluding q and e
 *
 *Return: Always 0 (Success)
 */
int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}

	}

	putchar('\n');

	return (0);

}
