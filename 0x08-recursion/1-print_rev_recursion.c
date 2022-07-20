#include "main.h"

/**
 * print_rev_reverse - print a string in reverse
 * @s: string to print
 */
void print_rev_reverse(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
