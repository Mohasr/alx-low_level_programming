#include <stdio.h>

/**
 * main - function to print alphabet.
 *
 * Return: 0 when successful
 */

int main(void)

{
	char alpabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alpabet[i]);
	}
	putchar('\n');
	return (0);
}
