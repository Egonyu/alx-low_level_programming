#include <stdlib.h>

/**
 * malloc_checked - program that allocates memory using malloc
 *
 * @b: amount of bytes to be allocated memory
 *
 * Return: pointer to our new allocated memory
 *         exit with 98 if malloc fails
*/

void *malloc_checked(unsigned int b)
{
	void *new_mem;

	new_mem = malloc(b);
	if (new_mem == NULL)
		exit(98);
	return (new_mem);
}
