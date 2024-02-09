#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);

#endif /* MAIN_H */

And here is the content for the _putchar.c file:

#include <unistd.h>

int _putchar(char c)
{
    return write(1, &c, 1);
}
