#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: string
 * Return: return char
 */
char *leet(char *str)
{
	int m, n;

	char *i = "aAeEoOtTlL";
	char *j = "4433007711";

	for (m = 0; str[m] != '\0'; m++)
	{
	for (n = 0; n < 10; n++)
	if (str[m] == i[n])
	s[m] = j[n];
	}
	return (str);

}
