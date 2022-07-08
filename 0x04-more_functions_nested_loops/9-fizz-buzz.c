#include "main.h"

/**
 * main - program that prints either number
 * or fizz or buzz or fizzBuzz
 *
 * Return: return 0
 */
int main(void)
{
	int x = 1;

	while (x < 101)
	{
	if (x % 3 == 0 && x % 5 == 0)
	printf("%s", "FizzBuzz");
	else if (x % 3 == 0)
	printf("%s", "Fizz");
	else if (x % 5 == 0)
	printf("%s", "Buzz");
	else
	printf("%d", x);
	if (x != 100)
	printf("%c", ' ');
	x++;
	}
	printf("%c", '\n');
	return (0);
}



