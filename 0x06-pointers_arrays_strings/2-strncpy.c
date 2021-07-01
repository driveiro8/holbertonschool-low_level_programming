#include "holberton.h"
/**
 * _strncpy - Copy a string
 * @dest: The destination value
 * @src: The source value
 * @n: The copy limit
 * Return: char
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (j = 0; j < n && src[i] != '\0'; j++)
	dest[j] = src[j];

	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
