#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: the used string to beb reversed
 * Return 0;
 */

void rev_string(char *s)
{
	int lnt, k, half;
	char fuss;

	for (lnt = 0; s[lnt] != '\0' ; lnt++)
	;
	k = 0;
	half = lnt / 2 ;

	while (half--)
	{
		fuss = s[lnt -k - 1];
		s[lnt -k - 1] = s[k];
		s[k] = fuss;
		k++;
	}
}



