#include "main.h"

/**
 * print_square - print squares
 * @size: parameter
 * Return: returns nothing
 */
void print_square(int size)
{
	int m, n;

	if (size > 0)
	{
	for (m = 0; m < size; m++)
	{
	for (j = 0; j < size; j++)
	_putchar('#');
	_putchar('\n')
	}
	}
	else
	_putchar('\n')
}
