#include "main.h"

/**
 *get_print - selects right function to print
 *depending on specifier passed to _printf
 *@s: holds the specifier
 *Return: a pointer to the matching printing function
 */
int (*get_print(char s))(va_list, flugs)
{
	pm emp_arr[] = {
		{'i', print_int},
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_big_hex},
		{'b', print_binary},
		{'o', print_octal},
		{'R', print_rot13},
		{'r', print_rev},
		{'S', print_bigS},
		{'p', print_address},
		{'%', print_percent}
	};
	int flags = 14;

	register int i;

	for (i = 0; i < flags; i++)
		if (emp_arr[i].c == s)
			return (emp_arr[i].f);

	return (NULL);
}
