#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: return int
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
	if (*s1 != *s2)
	break;
	s1++;
	s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
