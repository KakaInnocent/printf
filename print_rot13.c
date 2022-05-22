#include "main.h"

/**
 *print_rot13 - writes the string in rot13
 *@l: input string
 *@buf: buffer pointer
 *@ibuf: index for buffer pointer
 *Return: number of chars printed
 */
int print_rot13(va_list l, char *buf, unsigned int ibuf)
{
	char alf[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str;
	unsigned int i, j k;
	char nill[] = "(avyy)";

	str = va_arg(l, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuf = handle_buffer(buf, nill[i], ibuf);
		return (6);
	}
	for (i = 0; str[i]; i++)
	{
		for (k = j = 0; alf[j]; j++)
		{
			if (str[i] == alf[j])
			{
				k = 1;
				ibuf = handle_buffer(buf, rot13[j], ibuf);
				break;
			}
		}
		if (k == 0)
			ibuf = handle_buffer(buf, str[i], ibuf);
	}
	return (i);
}
