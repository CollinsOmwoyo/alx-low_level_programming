#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get from one
 *             number to another.
 * @n: The original number.
 * @m: The number to compare to.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count = 0;
unsigned long int diff = n ^ m;

while (diff)
{
count += (diff & 1);
diff >>= 1;
}

return (count);
}
