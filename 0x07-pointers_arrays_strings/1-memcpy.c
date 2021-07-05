#include "holberton.h"
/**
 * _memcpy - a script that copies memory
 * @dest: char
 * @stc: char
 * @n: unsigned int
 * Return: char
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for (i = 0; src && i < n; i++)
		dest[i] = src[i];

	return (dest);
}
