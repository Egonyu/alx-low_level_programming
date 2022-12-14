#include <stdio.h>

/**
 * main - Entry point
 *
 * Finds and prints the first 98 Fibonacci numbers, starting with 1
 * and 2, followed by a new line. The numbers are separated by a
 * comma and a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f1 = 1, f2 = 2;
	int next;
	int i = 3;

	printf("%d, %d, ", f1, f2);

	while (i <= 98)
	{
		next = f1 + f2;
		printf("%d, ", next);
		f1 = f2;
		f2 = next;
		i++;
	}

	printf("\n");

	return (0);
}
