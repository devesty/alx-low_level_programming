#include

/**
 * print_most_numbers - function that prints numbers expect 2 and 4
 *
 * Return: Always 0 (success)
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
	if (i != 2 && i != 4)
	_putchar(i + '0');
	i++;
	}
	_putchar('\n')
}
