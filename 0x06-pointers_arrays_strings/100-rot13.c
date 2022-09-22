#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: The string to be encoded.
 * Return: *s
 */

char *rot13(char *s)
{
	int huss;
	int fuss;

	char valu[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char lu[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (huss = 0; s[huss] != '\0'; huss++)
	{
		for (fuss =0; fuss < 52; fuss++)
		{
			if (s[huss] == valy[fuss])
			{
				s[huss] = lu[fuss];
				break;
			}
		}
	}

	return (s);
}

