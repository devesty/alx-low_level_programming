#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an arrays of chars and
 * initializes it with  a specific char
 * @size: size of array to be created
 * @c: char to initialized array with
 * Return: return pointer to the array or Null if malloc fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	return (NULL);
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	a[i] = c;
	}
	return (a);
}
