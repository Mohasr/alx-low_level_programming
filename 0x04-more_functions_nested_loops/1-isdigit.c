#include "main.h"

/**
 * _isdigit - checks if the number is digit.
 * @c: input number.
 * Return: 1 if it is digit and 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
