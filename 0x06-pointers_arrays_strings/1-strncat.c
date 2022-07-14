#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenate two strings
 * @dest: pointer to first parameter
 * @src: pointer to second parameter
 * @n: limit
 * Return: return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length;
	char *b;

	for (length = 0; dest[length] != '\0';)
	length++;
	b = dest + length;
	while (*src != '\0' && n--)
	*b++ = *src++;
	*b = '\0';
	return (dest);
}
