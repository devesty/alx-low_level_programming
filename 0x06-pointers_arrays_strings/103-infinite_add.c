#include "main.h"

/**
 * infinite_add - function that adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: result size
 * Return: return char
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	r = n1 + n2;

	if (sizeof(r) < size_r)
	return (0);
	return (r);
}
