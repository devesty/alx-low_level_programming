#include "main.h"
#include <string.h>

/**
 * _strcpy - function that copies the string pointed to by src
 * including the terminating null byte
 * to the buffer pointed to by dest
 * @dest: first parameter
 * @src: second parameter
 * Return: return char
 */
char *_strcpy(char *dest, char *src)
{
	int b = 0, i;

	for (; src[b] != '\0';)
	b++;
	for (i = 0; i < b; i++)
	dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
