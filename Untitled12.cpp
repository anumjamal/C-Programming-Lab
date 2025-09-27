#include <stdio.h>

int main() {
    int x, y,z;
    
    printf("Enter the first integer (x): ");
    scanf("%d", &x);

    printf("Enter the second integer (y): ");
    scanf("%d", &y);

    printf("Enter the third integer (z): ");
    scanf("%d", &z);

    if (x >= y) {
        
        if (x >= z) {
            printf("The largest number is: %d\n", x);
        } else {
            printf("The largest number is: %d\n", z);
        }
    } else {
    
        if (y >= z) {
            printf("The largest number is: %d\n", y);
        } else {
            printf("The largest number is: %d\n", z);
        }
    }

    return 0;
}

