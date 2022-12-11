#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - This program will assign a random number
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is greater than\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is less than\n", n);
	}
	return (0);
}
