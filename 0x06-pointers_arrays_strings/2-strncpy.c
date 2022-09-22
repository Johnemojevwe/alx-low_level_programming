#include "main.h"
/**
 * _strncpy - copies a string.
 * @dest: destintion.
 * @src: source.
 * @n: bytes from src.
 * Return: the pointer to dest.
 */
char *_strcncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
