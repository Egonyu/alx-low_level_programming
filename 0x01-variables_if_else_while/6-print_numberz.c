#include <stdio.h>

/**
 *main - program to print single digits
 *
 *Return: Always 0 (Success)
 */
int main(void)

{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	}

	putchar('\n');

	return (0);
}
