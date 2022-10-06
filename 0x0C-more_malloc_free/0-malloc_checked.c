#include "main.h"
#include <stdlib.h>
/**
 * malloc_check - allocates memory.
 * @b: the amount of bytes.
 * Return: the allocated mwmory
 **/
void *malloc_checked(unsigned int b)
{
	char *d;

	d = malloc(b);
	if (d == NULL)
		exit(98);
	return (d);
}
