#include "main.h"

/**
 * pu_ts - the function prints string
 * @s: string to be printed
 * Description: the function print string
 * It emulate the standard library puts
 * Return: count
 */

int pu_ts(char *s)
{
	int x = 0, count = 0;

	if (s == NULL)
		return (0);
	for (x = 0; s[x] != '\0'; x++)
	{
		put_char(s[x]);
		count++;
	}
	return (count);
}
