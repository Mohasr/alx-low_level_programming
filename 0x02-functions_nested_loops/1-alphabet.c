#include "main.h"

/**
 * print_alphabet - Print  alphabete.
 *
 * Return: 0 on cuccess
 */

void print_alphabet(void)

{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
