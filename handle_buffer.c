#include "main.h"

/**
 *handle_buffer - concatenates the buffer charachters
 *@buf: buffer pointer
 *@c: charachter to concatenate
 *@ibuf: index of buffer pointer
 *Return: index of buffer pointer
 */
unsigned int handle_buffer(char *buf, char c, unsigned int ibuf)
{
	if (ibuf == 1024)
	{
		print_buf(buf, ibuf);
		ibuf = 0;
	}
	buf[ibuf] = c;
	ibuf++;
	return (ibuf);
}
