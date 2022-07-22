#include <stdio.h>
#include "main.h"

/**
 * main - print argument passed to the program
 * @argc: counts argument
 * @argv: array of arguments
 * Return: return always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
