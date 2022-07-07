#include "main.h"

/**
 * print_most_numbers - function that prints numbers expect 2 and 4
 *
 * Return: Always 0 (success)
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	if ((i == 2) || (i == 4))
		continue;
	else
		_putchar(i + '0';)
	}
	_putchar('\n');
}
