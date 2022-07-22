#include "main.h"

/**
 * _isdigit - function that checks if a character is a digit or not
 * @c: tested character
 * Return: return 1 if it is a character and 0 if it is not
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	return (1);

	return (0);
}
