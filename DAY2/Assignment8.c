#include <stdio.h>

int main() {
    float f1, f2, C1, C2;
    printf("Enter temparature in fahrenhit:");
    scanf("%f", &f1);
    C1 = (f1 - 32) * 5 / 9;
    printf("Temparature in celsius = %.2f\n", C1);

    printf("Enter temparature in celsius:");
    scanf("%f", &C2);
    f2= ((C2 * 9) / 5)  +32;
    printf("Temparature in fahrenheit= %.2f\n", f2);

    return 0;
}