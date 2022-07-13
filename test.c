#include <stdio.h>
int main()
{
    unsigned int a;
    unsigned int getbits(unsigned);
    printf("Input an octal number:\n");
    scanf("%o", &a);
    printf("result:%o\n", getbits(a));
}
unsigned int getbits(unsigned value)
{
    unsigned int z;
    z = value & 0100000;
    if (z == 0100000)
        z = ~value + 1;
    else
        z = value;
    return (z);
}