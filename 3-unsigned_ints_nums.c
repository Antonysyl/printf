#include <stdio.h>
/**
 * main - handling conversion specifiers %o %u %x %X
 * Description: declare different integers and prints them out with
 * their specific conversion specifier to get the wanted result
 * Return: 0
 */
int main(void)
{
int oct = 21, unint = 19, hexdint = 22, hexint = 27;
printf("%o\n", oct);
printf("%u\n", unint);
printf("%x\n", hexdint);
printf("%X\n", hexint);
return (0);
}
