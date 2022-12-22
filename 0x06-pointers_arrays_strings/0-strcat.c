#include "main.h"
/**
 * _strcat - function to concatenate two strings,
 * @dest: destination input
 * @src: source input
 * Return: the pointer to destination.
 */
char *_strcat(char *dest, char *src)
{
	int lenght1 = 0, length2 = 0;

	while (*(dest + lenght1) != '\0')
	{
		lenght1++;
	}

	while (length2 >= 0)
	{
		*(dest + lenght1) = *(src + length2);
		if (*(src + length2) == '\0')
			break;
		lenght1++;
		length2++;
	}
	return (dest);
}
