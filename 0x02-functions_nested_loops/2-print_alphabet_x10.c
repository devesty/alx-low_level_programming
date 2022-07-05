#include "main.h"

/**
 * print_alphabet_x10 - print alphabet letters
 * ten times
 * desc: the function uses loop to operate
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
int counter = 0;
int letter = 1;
while (counter++ <= 9)
{
	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
	_putchar(10);
}
}
