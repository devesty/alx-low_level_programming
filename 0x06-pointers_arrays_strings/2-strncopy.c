#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: first pointer
 * @src: second pointer
 * @n: limit
 * Return: return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int copy;

	for (copy = 0; copy < n && src[copy] != '\0'; copy++)
	dest[copy] = src[copy];

	for (; copy < n; copy++)
	dest[copy] = '\0';
	return (dest);
}
