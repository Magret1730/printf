#include "main.h"

/**
 * put_char - prints character
 * @c: character to print
 * Return: On success, return the number of characters printed.
 *         On error, -1 is returned.
 */
int put_char(char c)
{
	return (write(1, &c, 1));
}
