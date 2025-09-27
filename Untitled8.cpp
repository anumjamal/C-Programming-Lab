#include <stdio.h>

int main() {
    int x, y, z;
    int max;

    // Prompt the user to enter three numbers
    printf("Enter three integer numbers: ");

    // Read the three integers from user input
    scanf("%d %d %d", &x, &y, &z);

    // Use a nested ternary operator to find the maximum number.
    // Logic:
    // 1. First, compare x and y.
    // 2. If x > y, then the largest number is between x and z. The inner ternary (x > z ? x : z) resolves this.
    // 3. If x <= y, then the largest number is between y and z. The inner ternary (y > z ? y : z) resolves this.
    max = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);

    // Display the result
    printf("The largest number is: %d\n", max);

    return 0;
}

