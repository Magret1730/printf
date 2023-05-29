#include "main.h"

/**
 * put_char - prints character
 * @o: argument to accept
 *
 * Description: A function that prints character
 * Emulating the putchar standard library function
 * Return: integer
 */

ssize_t put_char(char o)
{
	return (write(1, &o, 1));
}
