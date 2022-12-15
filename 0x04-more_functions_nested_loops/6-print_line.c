#include "main.h"

/**
 * print_line - function to draws a straight line
 * @n: number of times
 * Return: no return.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
