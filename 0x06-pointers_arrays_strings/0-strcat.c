#include "main.h"

/**
 * _strcat - function that concatenate two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: return dest
 */
char *_strcat(char *dest, char *src)
{
	int length, a;

	length = 0;
	while (dest[length] != '\0')
	{
	length++;
	}
	for (a = 0; src[a] != '\0', a++, length)
	{
	dest[length] = src[a];
	}
	dest[length] = '\0';
	return (dest);
}
