#include <stdio.h>
/**
 * main - Prints the numbers since 0 to 9
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
		putchar('0' + i);

	putchar('\n');

	return (0);
}
