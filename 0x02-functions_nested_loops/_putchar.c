#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 *
 * @c: a variable
 *
 * Return: On success
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}
