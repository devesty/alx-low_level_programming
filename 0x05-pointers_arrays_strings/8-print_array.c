#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * followed by a new line
 * @a: this is the input array
 * @n: this is the length of the array
 */
void print_array(int *a, int n)
{
int array;

	for (array = 0; array < n; array++)
	{
	printf("%d", a[array]);

	if (array != (n - 1))
{
	printf(", ");
}
}
	putchar('\n');
}
