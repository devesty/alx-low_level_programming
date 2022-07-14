#include "main.h"

/**
 * leet - function that encodes a string
 * @str: string to be passed
 * Return: return char
 */
char *leet(char *str)
{
	int m, n;

	char *i = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *j = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (m = 0; str[m] != '\0'; m++)
	{
	for (n = 0; i[n] != '\0'; n++)
	{
	if (str[m] == i[n])
	{
	str[m] = j[n];
	break;
	}
	}
	}
	return (str);
}
