#include "main.h"
/**
 * string_toupper - function to change lowercase to uppercase
 * @s: input parameter
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		if ((*(s + len) >= 97) && (*(s + len) <= 122))
			*(s + len) = *(s + len) - 32;
		len++;
	}

	return (s);
}
