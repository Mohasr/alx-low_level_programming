#include "main.h"
/**
 * leet - function to encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */

char *leet(char *s)
{
	int len = 0, i;
	int low_ltr[] = {97, 101, 111, 116, 108};
	int upp_ltr[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(s + len) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + len) == low_ltr[i] || *(s + len) == upp_ltr[i])
			{
				*(s + len) = num[i];
				break;
			}
		}
		len++;
	}

	return (s);
}
