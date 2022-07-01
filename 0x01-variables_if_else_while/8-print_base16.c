#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 48;
	int b = 97;

	while (a <= 57)
	{
	putchar(a);
	a++;
	}
	while (b <= 102)
	{
	putchar(b);
	b++;
	}
	putchar(10);
	return (0);
}
