#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverse a string
 * @s: this is the pointer string
 */
void rev_string(char *s)
{
int a, len;

char *start, *stop = s;

for (a = 0; s[a] != '\0' && s[a + 1] != '\0'; a++)
{
stop++;
	}
	len = a + 1;
	start = s;
	for (a = 0; a < len / 2; a++)
	{
	char x;

	x = *stop;
	*stop = *start;
	*start = x;
	start++;
	stop--;
	}
	stop[len + 1] = '\0';
}
