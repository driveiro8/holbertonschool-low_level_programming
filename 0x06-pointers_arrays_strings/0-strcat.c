#include "holberton.h"
/**
 * *_strcat - function that concatenates
 * @dest: dest
 * @src : src
 * Return: dest
 **/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
	return (dest);
}
