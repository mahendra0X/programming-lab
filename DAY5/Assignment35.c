#include <stdio.h>

int main() {
    int lower, upper, i, j, isPrime;

    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    for (i = lower; i <= upper; i++) {
        if (i < 2)
            continue;  // Skip numbers less than 2

        isPrime = 1;  // Assume number is prime

        // Check divisibility
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
