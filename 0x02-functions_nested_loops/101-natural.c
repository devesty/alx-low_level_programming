#include <stdio.h>

/**
 * main - print count of multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0, i < 1024, i++)
	{
	if ((n % 3) == 0 || (n % 5) == 0)
	sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
