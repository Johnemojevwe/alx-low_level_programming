#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always o.
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	peintf("%c: %d\n", c, _isupper(c));
	return (0);
}
