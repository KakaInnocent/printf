#include <unistd.h>

/**
 *_putchar - writes the character to stdout
 *@c: character to print
 *Return: 0 success, -1 error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
