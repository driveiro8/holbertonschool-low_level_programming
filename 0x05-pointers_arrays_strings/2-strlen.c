#include "holberton.h"

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int x;

	for (; *s != '\0'; s++);
	{
		x++
	}
	return (x);
}
