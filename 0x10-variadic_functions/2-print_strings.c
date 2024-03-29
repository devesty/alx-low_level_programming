#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string separator
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list li;
	unsigned int i;
	char *str;

	va_start(li, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(li, char *);
	if (str == NULL)
	printf("(nil)");
	else
	printf("%s", str);
	if (i != (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	printf("\n");
	va_end(li);
}
