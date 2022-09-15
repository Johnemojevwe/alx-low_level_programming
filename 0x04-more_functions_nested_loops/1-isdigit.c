#include "main.h"
/**
 * _isdigit - This function identifies if a character is a digit or not
 *
 * @c: character value
 *
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
