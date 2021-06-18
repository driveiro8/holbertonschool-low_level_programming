#include <stdio.h>
/**
 * main - Prints the alphabetic
 *
 * Return: Always (Success)
 */
int main(void)
{
	char charC, line;

	line = '\n';
	for (charC = 'a'; charC <= 'z'; charC++)
	{
		putchar (charC);
	}

	putchar(line);


return (0);

}
