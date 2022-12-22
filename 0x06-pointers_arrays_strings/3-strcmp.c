#include "main.h"
/**
 * _strcmp - funtion to compare two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals otherwise another number.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, co = 0;

	while (co == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		co = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (co);
}
