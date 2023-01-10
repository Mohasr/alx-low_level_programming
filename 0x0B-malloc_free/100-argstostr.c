#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function to concatenate arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *allarg;
	int c, i, j, k;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	allarg = malloc((c + 1) * sizeof(char));

	if (allarg == NULL)
	{
		free(allarg);
		return (NULL);
	}

	for (i = j = k = 0; k < c; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			allarg[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < c - 1)
			allarg[k] = av[i][j];
	}
	allarg[k] = '\0';

	return (allarg);
}
