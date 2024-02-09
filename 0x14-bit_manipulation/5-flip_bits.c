#include "main.h"

/**
 * flip_bits - checks the number of bits to be changed
 * from one number to others
 * @n: start num
 * @m: end num
 * Return: the number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
unsigned int count = 0;
while (xor_result != 0)
{
count += xor_result & 1;
xor_result >>= 1;
}
return (count);
}
