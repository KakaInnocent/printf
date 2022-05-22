#include "main.h"

/**
 *print_rev - writes the str in reverse
 *@l: input sting
 *@buf: buffer pointer
 *@ibuf: index of buffer pointer
 *Return: number of chars printed
 */
int print_rev(va_list l, char *buf, unsigned int ibuf)
{
	char *str;
	unsigned int i;
	int j = 0;
	char nill[] = "(llun)";

	str = va_arg(l, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuf = handle_buffer(buf, nill[i], ibuf);
		return (6);
	}
	for (i = 0; str[i]; i++)
		;
	j = i - 1;
	for (; j >= 0; j--)
	{
		ibuf = handle_buffer(buf, str[j], ibuf);
	}
	return (i);
}
