#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m, n, o;

	for (m = 48; m <= 55; m++)
	{
	for (n = 49; n <= 56; n++)
	{
	for (o = 50; o <= 57; o++)
	{
	if (n >= o || m >= n)
	continue;
	else
	{
	putchar(m);
	putchar(n);
	putchar(o);
	if (!(m == 55 && n == 56 && o == 57))
	{
	putchar(44);
	putchar(32);
}											}
	}
	}
	}
	putchar(10);
	return (0);
}
