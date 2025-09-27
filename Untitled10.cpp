#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the first integer (a): ");
    scanf("%d", &a);

    printf("Enter the second integer (b): ");
    scanf("%d", &b);

    printf("\n--- Results of Relational Operations ---\n");
    printf("Note: 1 means True, 0 means False.\n\n");

    printf("%d == %d is %d\n", a, b, a == b);

    printf("%d > %d is %d\n", a, b, a > b);

    printf("%d < %d is %d\n", a, b, a < b);

    printf("%d != %d is %d\n", a, b, a != b);

    printf("%d >= %d is %d\n", a, b, a >= b);

    printf("%d <= %d is %d\n", a, b, a <= b);

    return 0;
}

