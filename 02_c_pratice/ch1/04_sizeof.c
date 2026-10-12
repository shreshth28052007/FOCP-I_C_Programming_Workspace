#include <stdio.h>

int main() {
    printf("Size of char = %zu bytes\n", sizeof(char));
    printf("Size of int = %zu bytes\n", sizeof(int));
    printf("Size of float = %zu bytes\n", sizeof(float));
// 1 byte = 8bits ; can store 0s or 1s
    return 0;
}