#include <stdio.h>

int main() {
    int num, lastDigit;

    // Taking input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Using modulus operator to get last digit
    lastDigit = num % 10;

    // Handling negative numbers too
    if (lastDigit < 0) {
        lastDigit = -lastDigit;
    }

    printf("The last digit of %d is %d\n", num, lastDigit);

    return 0;
}
