#include "main.h"

/**
 *get_print - selects right function to print
 *depending on specifier passed to _printf
 *@s: holds the specifier
 *Return: a pointer to the matching printing function
 */
int (*get_print(const char *s, int index))(va_list, char *, unsigned int)
{
	print_m emp_arr[] = {
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
	return (emp_arr[i].f);
}
