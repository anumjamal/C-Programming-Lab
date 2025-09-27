#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);


    printf("Sum:           %d + %d = %d\n", a, b, a + b);

    printf("Difference:    %d - %d = %d\n", a, b, a - b);

    printf("Product:       %d * %d = %d\n", a, b, a * b);

    if (b != 0) {
        printf("Quotient:      %d / %d = %d\n", a, b, a / b);

        printf("Remainder:     %d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Quotient:      Error! Division by zero is not allowed.\n");
        printf("Remainder:     Error! Division by zero is not allowed.\n");
    }

    return 0;
}

