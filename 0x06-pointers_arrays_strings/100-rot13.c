#include "main.h"
/**
 * rot13 - function encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int len = 0, i;
	char str[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + len) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + len) == str[i])
			{
				*(s + len) = rot13[i];
				break;
			}
		}
		len++;
	}

	return (s);
}
