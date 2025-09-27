#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the first integer (a): ");
    scanf("%d", &a);

    printf("Enter the second integer (b): ");
    scanf("%d", &b);

    printf("\n--- Results of Bitwise Operations ---\n\n");

    printf("a & b (AND)      = %d\n", a & b);

    printf("a | b (OR)       = %d\n", a | b);

    printf("a ^ b (XOR)      = %d\n", a ^ b);

    printf("~a (NOT for a)   = %d\n", ~a);

    printf("a << 1 (Left Shift)  = %d\n", a << 1);

    printf("a >> 1 (Right Shift) = %d\n", a >> 1);

    return 0;
}

