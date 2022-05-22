#include "main.h"

/**
 *_printf - produces an output according to a format specified
 *@format: conatins the charachters and specifiers
 *Return: length of output string
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0, ibuf = 0;
	int (*function)(va_list, char *, unsigned int);
	va_list l;
	char *buffer;

	va_start(l, format), buffer = malloc(sizeof(char) * 1024);
	if (!format || !buffer || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (!format[i])
		return (0);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{	print_buf(buffer, ibuf), free(buffer), va_end(l);
			return (-1);
		}
		else
		{	function = get_print(format, i + 1);
			if (function == NULL)
			{
				if (format[i + 1] == ' ' && !format[i + 2])
					return (-1);
				handle_buffer(buffer, format[i], ibuf), len++, i--;
			}
			else
			{
				len += function(l, buffer, ibuf);
				i += ev_print_func(format, i + 1);
			}
		} i++;
		else
			handle_buffer(buffer, format[i], ibuf), len++;
		for (ibuf = len; ibuf > 1024; ibuf -= 1024)
			;
	}
	print_buf(buffer, ibuf), free(buffer), va_end(l);
	return (len);
}
