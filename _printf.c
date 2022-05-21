#include "main.h"

/**
 *_printf - produces an output according to a format specified
 *@format: conatins the charachters and specifiers
 *Return: length of output string
 */
int _printf(const char *format, ...)
{
	int (*function)(va_list, flugs *);
	const char *p;
	va_list args;
	flugs flags = {0, 0, 0};

	register int count = 0;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_flag(*p, &flags))
				p++;
			function = get_print(*p);
			count += (function)
				? function(args, &flags)
				: +printf("%%%c", *p);
		} else
			count += _putchar(*p);
	}
	_putchar(-1);
	va_end(args);
	return (count);
}
