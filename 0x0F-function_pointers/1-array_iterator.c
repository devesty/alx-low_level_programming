#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array containing elements
 * @size: size of the array
 * @action: pointer to the function needed
 * Return: return void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	while  (size--)
	action(*(array++));
}
