#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Print the sum of two diagonals of square matrix
 * @a: int
 * @size: int
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int i, x = 0, y = 0;

	for (i = 0; i < size; i++)
	{
		x += a[(size + 1) * b];
		y += a[(size - 1) * (b + 1)];
	}

	printf("%d, %d\n", x, y);
}
