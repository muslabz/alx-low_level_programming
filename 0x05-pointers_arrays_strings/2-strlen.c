#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: string to check
 * Return: int length of the string
 */

int _strlen(char *s)
{
	int lnt = 0;

	while (s[lnt ])
		lnt++;
	return (lnt);
}


