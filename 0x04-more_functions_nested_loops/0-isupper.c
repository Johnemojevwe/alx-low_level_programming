#include "main.h"
#include <stdio.h>

/**
 * _isupper - Tests whether a character is uppercase or not
 *
 * @c: The character to be tested
 *
 * Return: 0 if character is uppercase 1 otherwise
 *
 */

int _isupper(int c)
{
	char item;

	for (item = 'A'; item <= 'Z'; item++)
	{
		if (c == 0)
			return (1);
	}
	return (0);
}
