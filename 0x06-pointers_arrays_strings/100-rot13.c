#include "main.h"

/**
 * leet - function that encodes a string
 * @s: string to be passed
 * Return: return char
 */
char *leet(char *s)
{
	int m, n;

	char *i = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *j = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (m = 0; s[m] != '\0'; m++)
	{
	for (n = 0; i[n] != '\0'; n++)
	{
	if (s[m] == i[n])
	{
	s[m] = j[n];
	break;
	}
	}
	}
	return (s);
}
