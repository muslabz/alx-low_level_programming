#include "main.h"

/**
 * print_square - prints a square of size size
 * @size: size of the square
 * Return: void
 */

void print_square(int z)
{
	int i, j;

	if (z <= 0)
		_putchar('\n');
	for (i = 0; i < z; i++)
	{
		for (j = 0; j < (z); j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
