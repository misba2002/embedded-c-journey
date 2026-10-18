#include <stdio.h>

#define GETBIT(n,p)   (((n) >> (p)) & 1U)
#define SETBIT(n,p)   ((n) | (1U << (p)))
#define CLEARBIT(n,p) ((n) & ~(1U << (p)))

int main(void)
{
    unsigned int num = 12;

    printf("After setting bit 1: %u\n", SETBIT(num, 1));
    printf("Bit 3 value: %u\n", GETBIT(num, 3));
    printf("After clearing bit 2: %u\n", CLEARBIT(num, 2));

    return 0;
}