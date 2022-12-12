#include <stdio.h>

/**
 *main - program to print all possible combinations of single-digit numbers
 *
 *Return: Always 0 (success)
 */
int main(void)

{
	int num1, num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = num1 + 1; num2 <= 9; num2++)
		{
			putchar(num1 + '0');
			putchar(',');
			putchar(' ');
			putchar(num2 + '0');
		}
	}

	return (0);
}
