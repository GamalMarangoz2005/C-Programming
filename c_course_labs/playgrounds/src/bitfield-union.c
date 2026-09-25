#include <stdio.h>

typedef unsigned char u8;

typedef union  {

    struct {
        u8 B0 : 1;
        u8 B1 : 1;
        u8 B2 : 1;
        u8 B3 : 1;
        u8 B4 : 1;
        u8 B5 : 1;
        u8 B6 : 1;
        u8 B7 : 1; 
    } Bit;

    u8 Byte;

} Register;



int main()
{
    Register byte;

    byte.Byte = 15;

    printf("Register byte: %zu bytes\n", sizeof(byte));
    printf("Byte: %d\n", byte.Byte);
    printf("\n--- Bits ---\n");
    printf("\n0 1 2 3 4 5 6 7\n\n");
    printf("1 2 4 8  16 32 64 128\n");
    printf("%d %d %d %d  0%d 0%d 0%d 00%d = %d\n\n",byte.Bit.B0,byte.Bit.B1,byte.Bit.B2,byte.Bit.B3,byte.Bit.B4,byte.Bit.B5,byte.Bit.B6,byte.Bit.B7, byte.Byte);
    return 0;
}