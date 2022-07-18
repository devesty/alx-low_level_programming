#include "main.h"

/**
 * _mesmet - function that fills memory with a constant byte
 * @s: first parameter
 * @b: constant byte
 * @n: number of bytes
 * Return: return a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
