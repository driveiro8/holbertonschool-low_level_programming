#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *@x: pointer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
