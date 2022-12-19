#include "main.h"

/**
 * _strlen - function to returns length of a string.
 * @s: parameter
 * Return: length.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
