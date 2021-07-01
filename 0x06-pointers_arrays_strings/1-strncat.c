#include "holberton.h"
/**
 * _strncat - concatenates two strings
 *
 *@dest : pointer
 * @src : pointer
 * @n : bytes
 * Return: char
 **/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	char **p;

	p = &dest;
	for (i = 0; *(dest + i) != '\0'; i++)
		;

	dest[i] = ' ';

	for (j = 0; *(src + j) != '\0'; j++)
		;

	if (n > j)
		n = j;
	for (j = 0; j < n ; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
		return (*p);
}
