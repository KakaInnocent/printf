#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *struct printManager - chooses right function depending on format
 *passed to _printf
 *@types_args: format specifier
 *@k: pointer to the function
 */

typedef struct printManager
{
	char *types_args;
	int (*k)(va_list, char *, unsigned int);
} print_m;

int _printf(const char *format, ...);
int print_binary(va_list l, char *buf, unsigned int ibuf);
int print_hex(va_list l, char *buf, unsigned int ibuf);
int print_octal(va_list l, char *buf, unsigned int ibuf);
int print_big_hex(va_list l, flugs *k);
int print_int(va_list l, char *buf, unsigned int ibuf);
int print_unsigned(va_list l, char *buf, unsigned int ibuf);
int count_digit(int p);
void print_number(int m);

int print_buf(char *buf, unsigned int nbuf);
int ev_print_func(const char *s, int index);
unsigned int handle_buffer(char *buf, char c, unsigned int ibuf);
int (*get_print(const char *s, int index))(va_list, char *, unsigned int);
int print_string(va_list l, flugs *k);
int print_char(va_list l, char *buf, unsigned int ibuf);
char *converter(unsigned long int num, int base, int lowercase);
int _putchar(char c);
int _puts(char *str);

int print_rot13(va_list l, char *buf, unsigned int ibuf);
int print_rev(va_list l, char *buf, unsigned int ibuf);
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
