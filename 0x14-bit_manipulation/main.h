#ifndef MAIN—H
#define MAIN—H

#include <stdio.h>
#include < limits.h>
intputchar(char c);
uns i gned int binary_to_uint(const char *b);
void print—binary(unsigned long int n);
int get—bit(unsigned long int n, uns i gned int index);
int set_bit(unsigned long int *n, uns igned int index);
int clear_bit(unsigned long int *n, uns igned int index);
uns igned int flip_bits (uns i gned long int n, unsigned long int m);
int get_endi anness (void);

#endif
