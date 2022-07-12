#include "main.h"
/**
 * print_rev - function that prints a string,in reverse
 * @s: this is the input string
 */
void print_rev(char *s)
{
	int rev;

	for (rev = 0; s[rev] != '\0'; rev++)
	;
	for (rev = rev - 1; s[rev] != '\0'; rev--)
	{
	_putchar(s[rev]);
	}
	_putchar('\n');
}
