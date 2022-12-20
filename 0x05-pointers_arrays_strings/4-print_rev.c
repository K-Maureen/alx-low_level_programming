#include "main.h"

/**
 *print_rev - prints a string in reverse
 *@s: input string to be printed
 */
void print_rev(char *s)
{
	int q = 0;

	while (s[q] != '\0')
		q++;
	for (q = q - 1; q >= 0; q--)
		_putchar(s[q]);
	_putchar('\n');
}
