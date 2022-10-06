#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 * Return: A pointer to the allocated memory.
 */
 
void *malloc_checked(unsigned int b)
{
	void *gus = malloc(b);

	if (gus == NULL)
		exit(98);

	return (gus);
}

