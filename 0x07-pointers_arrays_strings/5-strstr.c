#include "main.h"

/**
 * _strstr - function to find the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer
*/
char *_strstr(char *haystack, char *needle)
{
	char *str1;
	char *str2;

	while (*haystack != '\0')
	{
		str1 = haystack;
		str2 = needle;

		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (!*str2)
			return (str1);
		haystack = str1 + 1;
	}
	return (0);
}
