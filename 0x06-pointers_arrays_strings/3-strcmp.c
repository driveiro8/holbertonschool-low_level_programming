#include "holberton.h"
/**
 * _strcmp: compares two strings
 * @s1: Source 1
 * @s2: Source 2
 * return: res
 **/
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int res;

	j =  0;
	for(i = 0; *(s1 + i) != '\0'; i++)
	{
		if (*(s1 + i) == *(s2 + j))
		{
			res = 0;
			j++;
		}
		else
		{
			res = (*(s1 + i) - *(s2 + j));
			break;
		}
	}
		return (res);
}
