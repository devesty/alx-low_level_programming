#include "main.h"

/**
 * _pow_recursion - return the value of x raised to y
 * @x: first parameter
 * @y: second parameter
 * Return: return recursion
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	if (y == 0)
	{
	return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
