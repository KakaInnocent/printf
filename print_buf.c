#include "main.h"

/**
 *print_buf - prints the buffer
 *@buf: buffer pointer
 *@nbuf: number of bytes to print
 *Return: number of bytes printed
 */
int print_buf(char *buf, unsigned int nbuf)
{
	return (write(l, buf, nbuf));
}