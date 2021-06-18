#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Prints a number and it's last digit along with whether its
 * last digit is 0, greater than 5, or less than 6 and not 0.
 * Return: 0
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;
	if (lastDigit == 0)
	{
		printf("Last digit of %d is 0 and is  0\n", n);
	}

	else if (lastDigit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		       n, lastDigit);
	}
	else (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
		       n, lastDigit);
	}

	return (0);
}
