#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: memory area to be copied to
 * @src: memory of bytes to be copied
 * @n: number of byutes to be copied
 *
 * Return:pointer to the coied memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
