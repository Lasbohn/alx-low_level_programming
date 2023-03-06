#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @C:the character toprint
 *
 * Return: on the  success 1.
 * on error, -1 is returnrd, and error is set appropratly
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}
