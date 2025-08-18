#include <stdio.h>

int main() {
    float principle,rate,time,simple_interest;
    printf("Enter the principle value:");
    scanf("%f", &principle);
    printf("Enter the rate value:");
    scanf("%f", &rate);
    printf("Enter the time:");
    scanf("%f", &time);
    simple_interest=(principle*rate*time)/100;
    printf("simple_interest=%.2f\n", simple_interest);
    return 0;
}