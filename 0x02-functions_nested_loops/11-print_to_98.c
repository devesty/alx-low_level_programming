#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural
 * numbers from n to 98
 * @n:integers to start by
 * Return: Always 0 (success)
 */
void print_to_98(void)
{
	if (n >= 98)
	{
	while (n > 98)
	printf("%d, ", n--);

	printf("%d\n", n);
	}
	else
	{
	while (n < 98)
	printf("%d, ", n++);

	printf("%d\n", n)
	}
}
