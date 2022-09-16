#include "main.h"

/**
 * _isupper - Tests whether a character is uppercase or not
 * @c: character to check for case
 *
 * Return: 1 if uppercase, 0 if not uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
