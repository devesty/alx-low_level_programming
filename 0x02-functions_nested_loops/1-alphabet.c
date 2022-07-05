#include "main.h"

/**
 * print_alphabet - function that print alphabet
 * it prints in lowercase
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	_putchar (letter);
	}
	_putchar (10);

}
