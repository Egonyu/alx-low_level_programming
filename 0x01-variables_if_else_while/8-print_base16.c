#include <stdio.h>

/**
 *main - program to print base 16 values
 *
 *Return: Always 0 (Succes)
 */
int main(void)

{
	int a;

	for (a = 0; a <= 15; a++)
	{
		if (a < 10)
		{
			putchar(a + '0');
		}
		else
		{
			putchar(a - 10 + 'a');
		}
	}

	putchar('\n');

	return (0);
}
