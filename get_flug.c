#include "main.h"

/**
 *get_flug - activates flag incase of _printf discovery
 *a flag modifier in the format string
 *@s: holds the flag specifier
 *@k: pointer to flags
 *Return: 1 if a flag has been turned on, otherwise 0
 */
int get_flug(char s, flugs *k)
{
	int i = 0;

	switch (s)
	{
		case '+':
			k->plus = 1;
			i = 1;
			break;
		case ' ':
			k->space = 1;
			i = 1;
			break;
		case '#':
			k->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
