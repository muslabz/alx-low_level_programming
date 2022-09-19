#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the used string reference pointer
 * Return 0;
 */

void print_rev(char *s)
{
	int cnt = 0;

	while (s[cnt])
		cnt++;
	while (cnt--)
		_putchar(s[cnt]);
	_putchar('\n');
}


