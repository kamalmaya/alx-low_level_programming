#include "main.h"

/**
 * print_binary - equivalent of a decimal number that prints a binary
 * @n: the amount or number binary to be printed
 */

void print_binary(unsigned long int n)
{
int l, S = 0;
unsigned long int ne;
for (l = 63; l >= 0; l--)
{
ne = n >> l;
if (ne & 1)
{
_putchar('1');
S++;
}
else if (ne)
_putchar('0');
}
if (!ne)
_putchar('0');
}

