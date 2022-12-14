#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line. The numbers are separated by a comma
 * and a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f1 = 1, f2 = 2;

	int next;

	printf("%d, %d, ", f1, f2);

	for (int i = 3; i <= 50; i++)
	{
		next = f1 + f2;
		printf("%d, ", next);
		f1 = f2;
		f2 = next;
	}

	printf("\n");

	return (0);
}
