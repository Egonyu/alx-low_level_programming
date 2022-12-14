#include "main.h"
#include <unistd.h>

/**
 *_putchar - print character c to stdout
 *Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
