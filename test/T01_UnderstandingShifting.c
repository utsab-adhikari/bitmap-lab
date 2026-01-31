#include <stdio.h>

int main() {
    unsigned int x = 0b00001111;
    unsigned int y = 0b00010000;

    printf("Mask for bit 3: 0b%08b\n", 1 << 3);
    // left shift of binary 1 by 3 positions

    printf("Mask for bit 4: 0b%08b\n", y>>2);
    // right shift of y by 2 positions

    printf("Mask for bit 6: 0b%08b\n", x<<2);
    // left shift of x by 2 positions

    return 0;
}

void print_bits(unsigned int x) {
    for (int i = 7; i >= 0; i--)
        printf("%d", (x >> i) & 1);
    printf("\n");
}
