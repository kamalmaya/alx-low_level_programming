#include"main.h"
/**
 * get_endianness
 *
 * Returns: 0 if big endian, 1 if little endian
 */

int get_endianness(void) {
unsigned int num = 1;
char *ptr = (char *)&num;
if (*ptr)
return (1); /** little endian */
else
return (0); /** big endian */
}
