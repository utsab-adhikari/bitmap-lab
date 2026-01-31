#include <stdio.h>

int main() {
    unsigned int x = 0b00001111;
    unsigned int y = 0b00010000;
    unsigned int mask01 = 1 << 3;
    unsigned int mask02 = y>>2;
    unsigned int mask03 = x<<2;

    printf("Mask for bit 3: 0b%08b\n", mask01);
    printf("Mask for bit 4: 0b%08b\n", mask02);
    printf("Mask for bit 6 using mask03: 0b%08b\n", mask03);

    return 0;
}

void print_bits(unsigned int x) {
    for (int i = 7; i >= 0; i--)
        printf("%d", (x >> i) & 1);
    printf("\n");
}
