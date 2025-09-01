#include <stdio.h>
#include <math.h>
int main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (floor(num) == num)
        printf("It is a whole number.\n");
    else
        printf("It is NOT a whole number.\n");
    return 0;
}
