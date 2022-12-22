#include <unistd.h>

#include "main.h"



/**

 * _putchar - writes the character

 *

 * @c: input charcter

 *

 * Return: 1 On success.

 *

 */



int _putchar(char c)



{

	return (write(1, &c, 1));



}
