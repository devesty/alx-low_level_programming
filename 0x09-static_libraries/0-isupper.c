#include "main.h"

/**
 * _isupper - function that checks if a character is uppercase or not
 * @c: tested character
 * Return: return 1 if the character is uppercase and 0 if it is not
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	return (1);

	return (0);
}
