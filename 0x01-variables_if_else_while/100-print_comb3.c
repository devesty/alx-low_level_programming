#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s;
	int r;

	for (s = 48; s < 57; s++)
	{
	for (r = 48; r <= 57; r++)
	{
	if (s > r || s == r)
	continue;
	else
	{
	putchar(s);
	putchar(r);
	if (!(s == 56 && r == 57))
	{
	putchar(44);
	putchar(32);								}
	}
	}
	}
	putchar(10);
	return (0);
}
