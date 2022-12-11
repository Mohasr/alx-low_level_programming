#include <stdio.h>

/**
 * main - function to print alphabet.
 *
 * Return: 0 when successful
 */

int main(void)

{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
