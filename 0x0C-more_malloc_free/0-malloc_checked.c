#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Function that allocates memory using malloc.
 * @b: number of bytes to allocate
 * Return: 0 means program was successful
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
