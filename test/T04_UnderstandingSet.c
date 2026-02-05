#include <stdio.h>

int main() {
    unsigned int x = 0b00001111;
    unsigned int y = 0b00000000;

    // set 4th bit of y
    y = y | (1 << 4);
    printf("y after setting 4th bit: 0b%08b\n", y);

    // mask x and apply XOR operation
    unsigned int mask = 1 << 2; // mask for 2nd bit
    unsigned int result = x ^ mask; // toggle 2nd bit of x
    printf("Result after toggling 2nd bit of x: 0b%08b\n", result);

    return 0;
}

void print_bits(unsigned int x) {
    for (int i = 7; i >= 0; i--)
        printf("%d", (x >> i) & 1);
    printf("\n");
}
