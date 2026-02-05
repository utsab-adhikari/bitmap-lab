#include <stdio.h>

int main() {
    unsigned int x = 0b00001111;
    unsigned int y = 0b00011000;

   // bitwise AND
    unsigned int and_result = x & y;
    printf("Bitwise AND of x and y: 0b%08b\n", and_result);

    // bitwise OR
    unsigned int or_result = x | y;
    printf("Bitwise OR of x and y: 0b%08b\n", or_result);

    return 0;
}

void print_bits(unsigned int x) {
    for (int i = 7; i >= 0; i--)
        printf("%d", (x >> i) & 1);
    printf("\n");
}
