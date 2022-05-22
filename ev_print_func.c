#include "main.h"

/**
 *ev_print_func - returns the amount of identifiers.
 *@s: argument identifier
 *@index: index of argument identifier
 *Return: amount of identifiers
 */
int ev_print_func(const char *s, int index)
{
	print_m emp_arr[] = {
		{"i", print_int},
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
		{'%', print_percent},
		{NULL, NULL},
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (emp_arr[i].types_args)
	{
		if (s[index] == emp_arr[i].types_args[j])
		{
			if (emp_arr[i].types_args[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (j);
}
