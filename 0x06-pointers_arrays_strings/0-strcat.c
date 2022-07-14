#include "main.h"

/**
 * _strcat - function that concatenate two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: return dest
 */
char *_strcat(char *dest, char *src)
{
	int src_len, dest_len, i;

	src_len = strlen(src);
	dest_len = strlen(dest);
	i = 0;
	for (; i < src_len; i++)
	dest[dest_len + i] = src[i];

	return (dest);
}
