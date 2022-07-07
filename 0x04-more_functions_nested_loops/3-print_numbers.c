#include "main.h"

/**
 * print_numbers - function that prints all numbers from
 * 0 t0 9
 * followed by a new line
 * Return: return nothing
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
	_putchar(i + '0');
	++i;
	}
	_putchar('\n');
}
