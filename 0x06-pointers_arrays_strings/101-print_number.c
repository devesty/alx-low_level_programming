#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: Integer
 * Return; return integer
 */
void print_number(int n)
{
	unsigned int m = 0;

	if (n < 0)
	{
	m = -n;
	_putchar('-');
	}
	else
	m = n;
	if (m / 10)
	print_number(m / 10);
	_putchar((m % 10) + '0');
}
