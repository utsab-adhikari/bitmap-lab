#include <stdio.h>

int main() {
    unsigned int x = 0b00001111;
    unsigned int y = 0b00000000;

    // set a bit:
    y |= (1 << 3);
    printf("y after setting 3rd bit: 0b%08b\n", y);

    // clear a bit:
    y &= ~(1 << 3);
    printf("y after clearing 3rd bit: 0b%08b\n", y);

    // toggle a bit:
    y ^= (1 << 2);
    printf("y after toggling 2nd bit: 0b%08b\n", y);

    // test a bit:
    unsigned int bit = (y >> 2) & 1;
    printf("2nd bit of y is: %u\n", bit);

    return 0;
}

void print_bits(unsigned int x) {
    for (int i = 7; i >= 0; i--)
        printf("%d", (x >> i) & 1);
    printf("\n");
}
