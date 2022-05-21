#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <stdarg.h>

/**
 *struct printManager - chooses right function depending on format
 *passed to _printf
 *@d: format specifier
 *@k: pointer to the function
 */

typedef struct printManager
{
	char d;
	int (*k)(va_list ap, flugs *k);
} pm;

int _printf(const char *format, ...);
int print_binary(va_list l, flugs *k);
int print_hex(va_list l, flugs *k);
int print_octal(va_list l, flugs *k);
int print_big_hex(va_list l, flugs *k);
int print_int(va_list l, flugs *k);
int print_unsigned(va_list l, flugs *k);
int count_digit(int p);
void print_number(int m);

int (*get_print(char s))(va_list, flugs *);
int get_flug(char s, flugs *k);
int print_string(va_list l, flugs *k);
int print_char(va_list l, flugs *k);
char *converter(unsigned long int num, int base, int lowercase);
int _putchar(char c);
int _puts(char *str);

int print_rot13(va_list l, flugs *k);
int print_rev(va_list l, flugs *k);
int print_bigS(va_list l, flugs *k);

int print_address(va_list l, flugs *k);
int print_percent(va_list l, flugs *k);

/**
 *struct flags - contains flags accessed when passed to _printf
 *@hash: # charachter flag
 *@plus: + charcher flag
 *@space: ' ' flag
 */

typedef struct flags
{
	int plus;
	int hash;
	int space;
} flugs;
#endif
