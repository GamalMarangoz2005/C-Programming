#include <stdio.h>

typedef union {
    unsigned int addr;
    unsigned char bytes[4];
} ipv4_addr;

int main(void)
{
    ipv4_addr myaddr = {0};
    myaddr.bytes[0] = 127;
    myaddr.bytes[1] = 0;
    myaddr.bytes[2] = 0;
    myaddr.bytes[3] = 1;

    printf("%d\n", myaddr.addr);

    printf("unsigned int addr: %zu bytes\n", sizeof(myaddr.addr));
    printf("unsigned char bytes: %zu bytes\n", sizeof(myaddr.bytes));
    return 0;
}