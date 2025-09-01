#include <stdio.h>

int main() {
    int num, lastDigit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    lastDigit = num - (num / 10) * 10;  // without using modulus operator

    printf("The last digit is: %d\n", lastDigit);

    return 0;
}
