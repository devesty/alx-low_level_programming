#include "main.h"

/**
 * reverse_array - function that reverse the content of
 * an array of integers
 *@a: pointer
 *@n: number of elements
 *Return: return void
*/
void reverse_array(int *a, int n)
{
	int m, s, temp;

	for (m = 0, s = (n - 1); m < (n / 2); m++, s--)
	{
	temp = a[m];
	a[m] = a[s];
	a[s] = temp;
	}
}

