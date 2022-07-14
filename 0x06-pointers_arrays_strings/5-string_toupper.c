#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase
 * @s: pointer to string
 * Return: return char
 */
char *string_toupper(char *s)
{
	int m, string;

	for (string = 0; s[string] != '\0';)
	string++;

	for (m = 0; m < string; m++)
	{
	if (s[m] >= 97 && s[m] <= 122)
	s[m] -= 32;
	}
	return (s);
}
