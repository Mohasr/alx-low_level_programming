#include "main.h"
/**
 * _strncat - function to concatenate two strings,
 * @dest: destination string.
 * @src: source string.
 * @n: number of bytes .
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0, len2 = 0;

	while (*(dest + len1) != '\0')
	{
		len1++;
	}

	while (len2 < n)
	{
		*(dest + len1) = *(src + len2);
		if (*(src + len2) == '\0')
			break;
		len1++;
		len2++;
	}
	return (dest);
}
